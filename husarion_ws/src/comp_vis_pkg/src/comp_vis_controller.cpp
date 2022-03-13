#include <ros/ros.h>
#include <std_msgs/Float32MultiArray.h>
#include <std_msgs/Int32MultiArray.h>
#include <geometry_msgs/Twist.h>
#include <std_msgs/String.h>
#include <opencv2/opencv.hpp>
#include <sensor_msgs/Range.h>
#include <stdio.h>

int id = 0;
ros::Publisher action_pub;
geometry_msgs::Twist set_vel;
int camera_center = 320; // left 0, right 640
float max_ang_vel = 0.6;
float min_ang_vel = 0.4;
float ang_vel = 0;

float distFL = 0;
float distFR = 0;
float average_dist = 0;
float desired_dist = 0.9;
float diff = 0;

void distFL_callback(const sensor_msgs::Range &range)
{
   distFL = range.range;
}

void distFR_callback(const sensor_msgs::Range &range)
{
   distFR = range.range;
}

void objectCallback(const std_msgs::Float32MultiArrayPtr &object)
{
   /*if (object->data.size() > 0)
   {
      id = object->data[0];

      float objectWidth = object->data[1];
      float objectHeight = object->data[2];
      float x_pos;
      float speed_coefficient = (float)camera_center / max_ang_vel;

      // Find corners OpenCV
      cv::Mat cvHomography(3, 3, CV_32F);
      std::vector<cv::Point2f> inPts, outPts;
      switch (id)
      {
      case STOP:
         set_vel.linear.x = 0;
         set_vel.angular.z = 0;
         break;
      case CAN:
         set_vel.linear.x = 2;
         set_vel.angular.z = 0;
         break;
      // case STOP:
      //    set_vel.linear.x = 0;
      //    set_vel.angular.z = 0;
         break;
      case SPEED:
         cvHomography.at<float>(0, 0) = object->data[3];
         cvHomography.at<float>(1, 0) = object->data[4];
         cvHomography.at<float>(2, 0) = object->data[5];
         cvHomography.at<float>(0, 1) = object->data[6];
         cvHomography.at<float>(1, 1) = object->data[7];
         cvHomography.at<float>(2, 1) = object->data[8];
         cvHomography.at<float>(0, 2) = object->data[9];
         cvHomography.at<float>(1, 2) = object->data[10];
         cvHomography.at<float>(2, 2) = object->data[11];

         inPts.push_back(cv::Point2f(0, 0));
         inPts.push_back(cv::Point2f(objectWidth, 0));
         inPts.push_back(cv::Point2f(0, objectHeight));
         inPts.push_back(cv::Point2f(objectWidth, objectHeight));
         cv::perspectiveTransform(inPts, outPts, cvHomography);

         x_pos = (int)(outPts.at(0).x + outPts.at(1).x + outPts.at(2).x +
                       outPts.at(3).x) /
                 4;
         diff = (x_pos - camera_center);

         if (diff >= 0)
         {
            ang_vel = max_ang_vel / 2;
         }
         else
         {
            ang_vel = -max_ang_vel / 2;
         }



         if (ang_vel >= (min_ang_vel / 1.25) && ang_vel <= (min_ang_vel / 1.25))
         {
            set_vel.angular.z = 0;
            if (distFL > 0 && distFR > 0)
            {
               average_dist = (distFL + distFR) / 2;
               set_vel.linear.x = 0.5; // (average_dist - desired_dist) / 8;
            }
            else
            {
               set_vel.linear.x = 0;
            }
         }
         else if (ang_vel >= max_ang_vel)
         {
            set_vel.angular.z = max_ang_vel;
         }
         else if (ang_vel <= -max_ang_vel)
         {
            set_vel.angular.z = -max_ang_vel;
         }
         else
         {
            set_vel.angular.z = ang_vel;
         }

         break;
      default: // other object
         set_vel.linear.x = 0;
         set_vel.angular.z = 0;
      }
      action_pub.publish(set_vel);
   }
   else
   {
      // No object detected
      set_vel.linear.x = 0;
      set_vel.angular.z = 0;
      action_pub.publish(set_vel);
   }*/
}

int main(int argc, char **argv)
{
   std_msgs::String s;
   std::string str;
   str.clear();
   str.append("");
   s.data = str;
   ros::init(argc, argv, "comp_vis_controller");
   ros::NodeHandle n("~");
   ros::Subscriber sub = n.subscribe("/objects", 1, objectCallback);

   ros::Subscriber distL_sub = n.subscribe("/range/fl", 1, distFL_callback);
   ros::Subscriber distR_sub = n.subscribe("/range/fr", 1, distFR_callback);
   ros::Rate loop_rate(50);
   action_pub = n.advertise<geometry_msgs::Twist>("/cmd_vel", 1);
   set_vel.linear.x = 0;
   set_vel.linear.y = 0;
   set_vel.linear.z = 0;
   set_vel.angular.x = 0;
   set_vel.angular.y = 0;
   set_vel.angular.z = 0;
   while (ros::ok())
   {
      ros::spinOnce();
      loop_rate.sleep();
   }
}