#include <ros/ros.h>
#include "../include/target_tracking/RosModule.hpp"



int main(int argc, char **argv)
{
    //initializing the node
    ros::init(argc, argv, "feature_triangulation_node");     //node name: "feature_triangulation_node"
    //starting the node
    ros::NodeHandle nodeHandle("~");    //private nodeHandle, calls ros::start()


    target_tracking::RosModule featureTriangulation(nodeHandle);

    //calls message callbacks, exits once ros::ok() returns false
    ros::spin();

    return 0;
}

