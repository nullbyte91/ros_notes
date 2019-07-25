#include <ros/ros.h>

int main(int argc, char **argv){
    ros::init(argc, argv, "first_node_name");
    ros::NodeHandle nh;
    ROS_INFO("Node has been started");

    ros::Rate rate(10);

    while(ros::ok()){
        ROS_INFO("sending a signal");
        rate.sleep();
    }
    return 0;
}