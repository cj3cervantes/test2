/*
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world! Claudia" << endl;
    return 0;
}
*/


/*
#include <cv.h>
#include <highgui.h>
#include <iostream>
using namespace std;

int main()
{
    cvNamedWindow("Hello", 1);
    cvWaitKey(0);
    cvDestroyWindow("Hello");
    return 0;
}
*/


#include <stdlib.h>
#include <cv.hpp>
#include <cxcore.hpp>
#include <highgui.h>

int main(int argc, char** argv)
{
    cv::Mat frame;
    int c;
    //CvCapture *capture = cvCaptureFromCAM(0);
    CvCapture *capture = cvCaptureFromCAM(1);

    while(1)
    {
        frame = cvQueryFrame(capture);
        //cv::imshow("OpenCV",frame);
	cv::imshow("OpenCV 123",frame);

        c = cv::waitKey(10);
        if(c==27)
            break;
    }
    return 0;
}
