#include <stdio.h>
#include <iostream>
#include "opencv2/core/core.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/calib3d/calib3d.hpp"
using namespace cv;
using namespace std;
int main()
{
	CvCapture* capture = cvCaptureFromCAM(0);
	IplImage* frame;
	while(1){
		frame= cvQueryFrame(capture);
		cvShowImage("u7karsh",frame);
		int key = cvWaitKey(1);
			if(key=='q') break;
						}
			cvReleaseCapture(&capture);
			return 0;
}