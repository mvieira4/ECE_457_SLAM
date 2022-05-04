from ws import WS_Server
import json
import time
import pico_4wd as car 

NAME = 'my_pico_car'

WIFI_MODE = "ap"
SSID = ""
PASSWORD = "12345678"

FORWARD_SCAN_ANGLE = 140

#Set speed for tests
TARGET_SPEED = 50

TURN_POWER = 50


# Code from obstacle_avoid


def get_dir(radar_data):
    # get scan status of 0, 1
    # print(radar_data)
    radar_data = [str(i) for i in radar_data]
    radar_data = "".join(radar_data)
    # Split 0, leaves the free path
    paths = radar_data.split("0")
    # print(paths)
    # print("paths: %s" % paths)
    length_list = []
    # Calculate where is the widest
    for path in paths:
        length_list.append(len(path))

    # Calculate the direction of the widest
    i = length_list.index(max(length_list))
    pos = radar_data.index(paths[i])
    pos += (len(paths[i]) - 1) / 2
    delta = len(radar_data) / 3

    if pos < delta:
        return "stop"
    elif pos > 2 * delta:
        return "stop"
    else:
        return "forward"


def get_power(targ_speed, crnt_power):
    crnt_speed = car.speed()

    if crnt_speed < targ_speed or crnt_power <= 0:
        return crnt_power + 1
    elif crnt_speed > targ_speed:
        return crnt_power - 1



def move_car(direction, motor_pow):
    global TURN_POWER
    global FORWARD_SCAN_ANGLE
    
    if direction == "left":
        print("turn left")
        distance = car.get_radar_distance_at(-FORWARD_SCAN_ANGLE/2)
        time.sleep(0.5)
        car.move("left", TURN_POWER)
        while True:
            distance = car.get_radar_distance_at(-FORWARD_SCAN_ANGLE/2)
            status = car.get_radar_status(distance)
            if status == 1:
                break
        car.move("stop")
        car.set_radar_scan_angle(FORWARD_SCAN_ANGLE)
    elif direction == "right":
        print("turn right")
        distance = car.get_radar_distance_at(FORWARD_SCAN_ANGLE/2)
        time.sleep(0.5)
        car.move("right", TURN_POWER)
        while True:
            distance = car.get_radar_distance_at(FORWARD_SCAN_ANGLE/2)
            status = car.get_radar_status(distance)
            if status == 1:
                break
        car.move("stop")
        car.set_radar_scan_angle(FORWARD_SCAN_ANGLE)
    elif direction == "stop":
        car.move("stop")
    else:
        print("forward")
        car.set_radar_scan_angle(FORWARD_SCAN_ANGLE)
        car.move("forward", motor_pow)
        print(f"speed: {car.speed()}")


if __name__ == "__main__":
    try:
        ws = WS_Server(name=NAME, mode=WIFI_MODE, ssid=SSID, password=PASSWORD)
        ws.start()
        led_status = False
        
        car.RADAR_REFERENCE = 20
        car.RADAR_STEP_ANGLE = 10
        car.set_radar_scan_angle(FORWARD_SCAN_ANGLE)
        
        status = "Danger"
        
        motor_pow = 0
        
        # General
        while True:
            radar_data = car.radar_scan()
            # print("radar_data: %s" % radar_data)
            # If radar data return a int, means scan not finished, and the int is current angle status
            if isinstance(radar_data, int):
                if radar_data == 0 and status != "Danger":
                    print("Danger!")
                    status = "Danger"
                    car.move("stop")
                    car.set_radar_scan_angle(180)
                continue
            else:
                status = "Save"

            direction = get_dir(radar_data)
            
            motor_pow = get_power(TARGET_SPEED, motor_pow)
              
            print(f"power: {motor_pow}")
            
            move_car(direction, motor_pow)
            

    finally:
        car.move("stop")
