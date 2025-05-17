#include <iostream>
#include "include/main.h"

void main() 
{
    takeOff();
    int key;
    //Camera
    cv::VideoCapture capture(0);
    cv::Mat img;
    //Detection 
    cv::CascadeClassifier locustCascade;
    locustCascade.load("src/resources/haarcascade_frontalface_alt.xml");
    if(locustCascade.empty())   {std::cout<<"File Not Avaliable."<<std::endl;}
    std::vector<cv::Rect> bugs;
    
    while (true)
    {
        capture.read(img);
        
        
        
        //Check for locust probability
        locustCascade.detectMultiScale(img, bugs, 1.1, 10);
        
        for(int i = 0; i < bugs.size();i++)
        {
            cv::rectangle(img,bugs[i].tl(),bugs[i].br(),cv::Scalar(255,0,255),3);
        }

        cv::imshow("Img",img);

        key = cv::waitKey(1);

        if(key == 27)
        {
            break;
            capture.release();
            cv::destroyAllWindows();
        }
    }
    land();
}