
#include "../include/target_tracking/FeatureTriangulation.hpp"
#include <iostream>

namespace target_tracking {

    //constructor
    FeatureTriangulation::FeatureTriangulation()
    {       //possible initialization of member variables
    }

    //destructor
    FeatureTriangulation::~FeatureTriangulation()
    {
    }


    void FeatureTriangulation::extractFeatures(Mat frame) {
        //extract the features
        std::cout << "extractFeatures worked" << std::endl;
    }

} /* namespace */
