
#include "../include/target_tracking/RosModule.hpp"

#include <iostream>
#include <ros/ros.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <string>


using namespace cv;

namespace target_tracking {


    //constructor initialization
    RosModule::RosModule(ros::NodeHandle& nodeHandle)
            : nodeHandle_(nodeHandle)                                                //initializing nodeHandle
    {
        subscriber_ = nodeHandle_.subscribe("/cam0/image_rect", 1000,
                                            &RosModule::imageCallback, this);
        ROS_INFO("Successfully launched node.");
    }


    //destructor
    RosModule::~RosModule()
    {
    }



    void RosModule::imageCallback(const sensor_msgs::ImageConstPtr& msg) {

        Mat imported_frame = cv_bridge::toCvShare(msg, "mono8")->image;

        featureTriangulation_.extractFeatures(imported_frame);


        /*
            try {
                ROS_INFO("Function worked");

                //shows converted image input (sensor_msgs/Image -> cv::Mat), opencv format for images
                imshow("displayed image", cv_bridge::toCvShare(msg, "mono8")->image);
                waitKey(30);
            }
            catch (cv_bridge::Exception& e)
            {
                ROS_ERROR("Could not convert from '%s' to 'mono8'.", msg->encoding.c_str());
            }

        */


    }



} /* namespace */
