
#ifndef TARGET_TRACKING_FEATURETRIANGULATION_HPP
#define TARGET_TRACKING_FEATURETRIANGULATION_HPP

#include <opencv2/opencv.hpp>


using namespace cv;

namespace target_tracking {

/*!
 * Class containing the algorithmic part of the package.
 */
    class FeatureTriangulation {
    public:
        //constructor
        FeatureTriangulation();

        //destructor
        virtual ~FeatureTriangulation();


        //METHODS of FeatureTriangulation class
        void extractFeatures(Mat frame);


//private:
        //internal variables

    };

} /* namespace */

#endif //TARGET_TRACKING_FEATURETRIANGULATION_HPP

