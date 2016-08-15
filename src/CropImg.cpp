#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <imgproc/imgproc.hpp>
#include <highgui/highgui.hpp>

using namespace std;
using namespace cv;

int DELAY_CAPTION = 1500;
int DELAY_BLUR = 100;
int MAX_KERNEL_LENGTH = 31;

Mat src;
Mat dst;

char window_name[] = "Filter Demo 1";

int display_caption(char* caption);
int display_img(int delay, Mat dst);

int findROI(Mat input) {
	// feature extraction

	// find contour

	//
}



int resizeNwrite(char* input, char* output) {
	namedWindow(window_name, CV_WINDOW_AUTOSIZE);
	printf("\n start program ...");
	// Load the source image
	src = imread(input);
	printf("\n load image success %d - %d ...", src.size().width, src.size().height);
	// Crop image
	int x = 0;
	int y = 0;
	int width = src.size().width;
	int height = src.size().height;

	if(width > height) {
		x = (width - height) / 2;
	} else {
		y = (height - width) / 2;
	}
	width = std::min(width, height);
	height = width;

	Rect roi = Rect(x,y,width,height);
	dst = src(roi);
	// Resize image
	Size size = Size(960,960);
	resize(dst, dst, size);
	printf("\n resize success");
	imwrite(output, dst);
	//waitKey(0);
	return 0;
}




int display_caption(char* caption) {
	Mat dst = Mat::zeros(src.size(), src.type());

	putText(dst, caption,Point(src.cols/4, src.rows/2), CV_FONT_HERSHEY_COMPLEX,1, Scalar(255, 255, 255));

	imshow(window_name, dst);

	int c = waitKey(DELAY_CAPTION);

	if(c >= 0) {
		return -1;
	}

	return 0;
}

int display_img(int delay, Mat dst) {
	imshow(window_name, dst);

	int c = waitKey(delay);
	if(c >= 0) {
		return -1;

	}
	return 0;
}

int main(int argc, char** argv) {
	char* input = "/home/kyhoolee/0499.png";//"/home/kyhoolee/tutorial/work/abacsi/range-rover-1492905.jpg";
	char* output = "/home/kyhoolee/tutorial/all-workspace/cppSpace/DisplayImage/data/alpha.jpg";

	if(argc >= 3) {
		input = argv[1];
		output = argv[2];
	}
	resizeNwrite(input, output);

	return 0;
}
