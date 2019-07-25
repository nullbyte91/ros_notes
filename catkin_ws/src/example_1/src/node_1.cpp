#include <ros/ros.h>

int main(int argc, char **argv){
    ros::init(argc, argv, "first_node_name");
    
    ros::NodeHandle nh;

    ROS_INFO("Node has been started");
    
    ros::Duration(1.0);

    ROS_INFO("exit");

    return 0;
}