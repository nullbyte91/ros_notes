## ros notes

### Ubuntu 16.04 Installation:

```bash
# Setup your sources.list
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'

# Set up your keys
sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654

# Installation: ROS-Base
sudo apt-get update
sudo apt-get install ros-kinetic-ros-base

# Env setup 
echo "source /opt/ros/kinetic/setup.bash" >> ~/.bashrc
source ~/.bashrc
``` 

#### Run ROS master
```bash
roscore 
```

#### ROS Commands:
```bash
#To play ros bag files
rosbag play video_4.bag

#To get the info(topics)
rosbag info video_4.bag 

# To know the information on specfic topic
rostopic echo /sy/cam/center/image
```

#### Create a Workspacee
```bash
mkdir catkin_ws
cd catkin_ws
mkdir src       #Keep all the src code inside
catkin_make     # Create a ROS workspace and compilation
```

#### ROS Package creation
```bash
cd catkin_ws/src/
# catkin_create_pkg package_name dep1 dep2 dep3
# exp:
catkin_create_pkg example_1 roscpp rospy std_msgs
# roscpp - ros cpp support
# rospy - rospy support 
# std_msgs - msg support
```

