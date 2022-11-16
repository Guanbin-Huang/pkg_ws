#include <yaml-cpp/yaml.h> // yaml-cpp-release-0.5.2/include/yaml-cpp/*.h
#include <string>
#include <iostream>

using namespace std;

 int main()
{
    YAML::Node poses = YAML::LoadFile("../poses.yaml");
    int poses_size = poses.size();

    for (int i = 0; i < poses_size; ++i){
      cout << "loading " << i << "-th pose from " << poses_size << endl;  
      auto p = poses[i];
      auto X =  p["position"][0].as<double>();
      auto Y =  p["position"][1].as<double>();
      auto Z =  p["position"][2].as<double>();
      auto id = p["id"].as<int>();
      auto leica_topic = p["sensor_measurements"][0][1].as<std::string>();
      auto robot_odom_topic  = p["sensor_measurements"][2][1].as<std::string>();

      cout << "X = " << X << endl;
      cout << "Y = " << Y << endl;
      cout << "Z = " << Z << endl;
      cout << "id = " << id << endl;
      cout << "leica_topic: " << leica_topic << endl;
      cout << "robot_odom_topic: " << robot_odom_topic << endl;
      cout << "--------------------" << endl;

    }

   return 0;
}


