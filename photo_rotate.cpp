#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
    int img_normal, img_rotated;
    img_normal = imread(" E:/c++/Project/camera.png", IMREAD_UNCHANGED);

    if(img_normal.empty())
    {
        cout << "Error in uploading image !!!" << endl;
        return -1;
    }
    //for rotating 90 degree clockwise
    rotate(img_normal, img_rotated, ROTATE_90_CLOCKWISE);
    //for displaying original image
    namedWindow("Original Image", WINDOW_AUTOSIZE);
    imshow("Original Image", img_normal);
    //for displaying rotated image
    namedWindow("Rotated Image", WINDOW_AUTOSIZE);
    imshow("Rotated Image", img_rotated);

    waitKey(0);
    return 0;
}