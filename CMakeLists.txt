cmake_minimum_required( VERSION 3.10 )

project(test_sth)
set (CMAKE_CXX_STANDARD 11)

find_package(yaml-cpp REQUIRED)
set(YAML_CPP_DIR "/home/ubuntu/3rdparty/yaml-cpp-release-0.5.2")


message(STATUS "----${YAML_CPP_INCLUDE_DIR}")
message(STATUS "----${YAML_CPP_LIBRARIES}")

include_directories(
 ${YAML_CPP_INCLUDE_DIR}
 include
 ${catkin_INCLUDE_DIRS}
)

add_executable(yaml_cpp_test yaml_cpp_test.cpp)

target_link_libraries(yaml_cpp_test ${YAML_CPP_LIBRARIES})