#include "ros/ros.h"
#include "sensor_msgs/Image.h"
#include "sensor_msgs/image_encodings.h"

int main(int argc, char* argv[]){
  ros::init(argc,argv,"image_pub");
  ros::NodeHandle n;
  ros::Publisher pub = n.advertise<sensor_msgs::Image>("/testimage",1000);

    while(ros::ok()){
        sensor_msgs::Image img;
        img.header.frame_id = "map";
        img.height = 400;
        img.width = 400;
        img.encoding = sensor_msgs::image_encodings::MONO8;
        img.step = 400;
        img.data = std::vector<unsigned char>(160000);
        
        pub.publish(img);
        ros::spinOnce();
    }

  return 0;
}