/**
 * file Smoothing.cpp
 * brief Sample code for simple filters
 * author OpenCV team
 */

#include <stdio.h>
#include <imgproc/imgproc.hpp>
#include <highgui/highgui.hpp>

using namespace std;
using namespace cv;
/*
int DELAY_CAPTION = 1500;
int DELAY_BLUR = 100;
int MAX_KERNEL_LENGTH = 31;

Mat src;
Mat dst;

char window_name[] = "Filter Demo 1";

int display_caption(char* caption);
int display_dst(int delay);

int smoothing(int argc, char** argv) {
	namedWindow(window_name, CV_WINDOW_AUTOSIZE);

	printf("\n start program ...");
	// Load the source image
	src = imread("/home/kyhoolee/tutorial/all-workspace/cppSpace/DisplayImage/data/lena.png");


	printf("\n load image success %d - %d ...", src.rows, src.cols);

	if(display_caption("Original Image") != 0){
		return 0;
	}


	dst = src.clone();

	Size size = src.size();//.clone();
	size.height = 960;
	size.width = 960;
	resize(src, src, size);

	printf("\n dst clone success");

	if(display_dst(DELAY_CAPTION) != 0) {
		return 0;
	}

	// Applying homogeneous blur
	if(display_caption("Homogeneous Blur") != 0){
		return 0;
	}

	for(int i = 1 ; i < MAX_KERNEL_LENGTH ; i = i + 2) {
		blur(src, dst, Size(i,i), Point(-1,-1));

		if(display_dst(DELAY_BLUR) != 0) {
			return 0;
		}
	}


	/*
	// Applying gaussian blur
	if(display_caption("Gaussian blur") != 0 ) {
		return 0;
	}

	for(int i = 1 ; i < MAX_KERNEL_LENGTH ; i = i + 2) {
		GaussianBlur(src, dst, Size(i,i), 0,0);

		if(display_dst(DELAY_BLUR) != 0){
			return 0;
		}
	}


	// Applying median blur
	if(display_caption("Median blur") != 0) {
		return 0;
	}

	for(int i = 1 ; i < MAX_KERNEL_LENGTH ; i = i + 2) {
		medianBlur(src, dst, i);
		if(display_dst(DELAY_BLUR) != 0) {
			return 0;
		}
	}

	// Applying bilateral filter
	if(display_caption("Bilateral Blur") != 0) {
		return 0;
	}

	for(int i = 1 ; i < MAX_KERNEL_LENGTH ; i += 2) {
		bilateralFilter(src, dst, i, i*2, i/2);
				if(display_dst(DELAY_BLUR) != 0) {
					return 0;
				}
	}


	// Wait until user press a key
	display_caption("End: Press a key!");



	waitKey(0);
	return 0;

}

int display_caption(char* caption) {
	dst = Mat::zeros(src.size(), src.type());

	putText(dst, caption,Point(src.cols/4, src.rows/2), CV_FONT_HERSHEY_COMPLEX,1, Scalar(255, 255, 255));

	imshow(window_name, dst);

	int c = waitKey(DELAY_CAPTION);

	if(c >= 0) {
		return -1;
	}

	return 0;
}

int display_dst(int delay) {
	imshow(window_name, dst);

	int c = waitKey(delay * 4);
	if(c >= 0) {
		return -1;

	}
	return 0;
}
*/
