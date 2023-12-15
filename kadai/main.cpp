#include <iostream>
#include <string>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>


int main(int argc, char* argv[]){
  
    cv::Mat img = cv::imread("Mandrill_gray.png");

    if ( img.empty() ) {
        return -1;
    }











    return 0;
}

