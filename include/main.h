#ifndef MAIN_HPP
#define MAIN_HPP
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

void realTimeDetection();
void takeOff();
void land();
cv::Mat preproccesImage(cv::Mat image,int targetSizeX,int targetSizeY);
void detectLocust(cv::Mat img);

#endif