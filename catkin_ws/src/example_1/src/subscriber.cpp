#include <ros/ros.h>
#include <std_msgs/String.h>

void callback_fun(const std_msgs::String &msg)
{
    ROS_INFO("Message_recieved: %s", msg.data.c_str());
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "subscribe_node");
    ros::NodeHandle nh;

    ros::Subscriber sub = nh.subscribe("/transmitter", 1000, callback_fun);
    ros::spin();
    return 0;
}