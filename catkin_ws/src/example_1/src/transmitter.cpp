#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char **argv){
    ros::init(argc, argv, "transmiter_node");
    ros::NodeHandle nh;

    ros::Publisher pub = nh.advertise<std_msgs::String>("/transmitter", 10);
    ros::Rate rate(3);

    while(ros::ok()){
        std_msgs::String msg;
        msg.data = "Publisher signal";
        pub.publish(msg);
        rate.sleep();
    }
    return 0;
}