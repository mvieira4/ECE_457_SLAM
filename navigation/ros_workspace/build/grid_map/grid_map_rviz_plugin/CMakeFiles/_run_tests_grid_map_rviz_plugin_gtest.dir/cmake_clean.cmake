file(REMOVE_RECURSE
  "grid_map_rviz_plugin_automoc.cpp"
  "grid_map_rviz_plugin-test_automoc.cpp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/_run_tests_grid_map_rviz_plugin_gtest.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()