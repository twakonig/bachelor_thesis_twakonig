
#ifndef TARGET_TRACKING_ROSMODULE_HPP
#define TARGET_TRACKING_ROSMODULE_HPP

#include "../include/target_tracking/FeatureTriangulation.hpp"
#include <ros/ros.h>
#include <sensor_msgs/CameraInfo.h>             //for sensor_msgs
#include <image_transport/image_transport.h>    //for ImageConstPtr&

namespace target_tracking {


    class RosModule {
    public:
        //constructor
        RosModule(ros::NodeHandle& nodeHandle);

        //destructor
        virtual ~RosModule();

    private:

        //  bool readParameters();

        void imageCallback(const sensor_msgs::ImageConstPtr& msg);

        //! ROS node handle, private
        ros::NodeHandle& nodeHandle_;

        //! ROS topic subscriber.
        ros::Subscriber subscriber_;

        //! ROS topic name to subscribe to.
        //std::string subscriberTopic_;

        //! FeatureTriangulation computation object
        FeatureTriangulation featureTriangulation_;

    };

} /* namespace */

#endif //TARGET_TRACKING_ROSMODULE_HPP
