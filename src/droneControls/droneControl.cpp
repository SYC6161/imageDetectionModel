#include <iostream>
#include "include/main.h"

void takeOff()
{
    std::cout<<"Taking Off"<<std::endl;
    //Drone Take Off
}

void land()
{
    std::cout<<"Land"<<std::endl;
    //Drone Land
}

void moveToLocation(int longitude,int latitude,int altitude)
{
    std::cout<<"Moving to Lat: "<< latitude <<"Long: "<<longitude<<"Altitude: "<<altitude<<std::endl;
    //Drone move
}

void sprayPesticide()
{
    std::cout<<"Starting Spray"<<std::endl;
}

cv::Mat preproccesImage(cv::Mat image,int targetSizeX,int targetSizeY)
{
    cv::Mat img;
    cv::resize(image,img,cv::Size(targetSizeX,targetSizeY));

    return img;
}

void realTimeDetection()
{
    takeOff();

    cv::VideoCapture capture(0);
    cv::Mat img;
    cv::Mat proccessedImage;
    while (true)
    {
        capture.read(img);

        proccessedImage = preproccesImage(img,224,224);

        //Check for locust probability

        cv::imshow("Img",proccessedImage);
        cv::waitKey(1);

    }
    capture.release();
    cv::destroyAllWindows();
    land();
}

