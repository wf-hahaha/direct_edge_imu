/**
* This file is part of the implementation of our papers: 
* [1] Yonggen Ling, Manohar Kuse, and Shaojie Shen, "Direct Edge Alignment-Based Visual-Inertial Fusion for Tracking of Aggressive Motions", Autonomous Robots, 2017.
* [2] Yonggen Ling and Shaojie Shen, "Aggresive Quadrotor Flight Using Dense Visual-Inertial Fusion", in Proc. of the IEEE Intl. Conf. on Robot. and Autom., 2016.
* [3] Yonggen Ling and Shaojie Shen, "Dense Visual-Inertial Odometry for Tracking of Aggressive Motions", in Proc. of the IEEE International Conference on Robotics and Biomimetics 2015.
*
*
* For more information see <https://github.com/ygling2008/direct_edge_imu>
*
* This code is a free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This code is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this code. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ___FColorMap
#define ___FColorMap

/// @file Class defination of a false color map


#include <ros/ros.h>
#include <opencv2/opencv.hpp>


class FColorMap
{
public:
    FColorMap()
    {
	    int nColors = 64;
	    colors.reserve(nColors);

	    colors[0   ] = cv::Vec3b( 143     ,0     ,0 );
	    colors[1   ] = cv::Vec3b( 159     ,0     ,0 );
	    colors[2   ] = cv::Vec3b( 175     ,0     ,0 );
	    colors[3   ] = cv::Vec3b( 191     ,0     ,0 );
	    colors[4   ] = cv::Vec3b( 207     ,0     ,0 );
	    colors[5   ] = cv::Vec3b( 223     ,0     ,0 );
	    colors[6   ] = cv::Vec3b( 239     ,0     ,0 );
	    colors[7   ] = cv::Vec3b( 255     ,0     ,0 );
	    colors[8   ] = cv::Vec3b( 255    ,15     ,0 );
	    colors[9   ] = cv::Vec3b( 255    ,31     ,0 );
	    colors[10   ] = cv::Vec3b( 255    ,47     ,0 );
	    colors[11   ] = cv::Vec3b( 255    ,63     ,0 );
	    colors[12   ] = cv::Vec3b( 255    ,79     ,0 );
	    colors[13   ] = cv::Vec3b( 255    ,95     ,0 );
	    colors[14   ] = cv::Vec3b( 255   ,111     ,0 );
	    colors[15   ] = cv::Vec3b( 255   ,127     ,0 );
	    colors[16   ] = cv::Vec3b( 255   ,143     ,0 );
	    colors[17   ] = cv::Vec3b( 255   ,159     ,0 );
	    colors[18   ] = cv::Vec3b( 255   ,175     ,0 );
	    colors[19   ] = cv::Vec3b( 255   ,191     ,0 );
	    colors[20   ] = cv::Vec3b( 255   ,207     ,0 );
	    colors[21   ] = cv::Vec3b( 255   ,223     ,0 );
	    colors[22   ] = cv::Vec3b( 255   ,239     ,0 );
	    colors[23   ] = cv::Vec3b( 255   ,255     ,0 );
	    colors[24   ] = cv::Vec3b( 239   ,255    ,15 );
	    colors[25   ] = cv::Vec3b( 223   ,255    ,31 );
	    colors[26   ] = cv::Vec3b( 207   ,255    ,47 );
	    colors[27   ] = cv::Vec3b( 191   ,255    ,63 );
	    colors[28   ] = cv::Vec3b( 175   ,255    ,79 );
	    colors[29   ] = cv::Vec3b( 159   ,255    ,95 );
	    colors[30   ] = cv::Vec3b( 143   ,255   ,111 );
	    colors[31   ] = cv::Vec3b( 127   ,255   ,127 );
	    colors[32   ] = cv::Vec3b( 111   ,255   ,143 );
	    colors[33    ] = cv::Vec3b( 95   ,255   ,159 );
	    colors[34    ] = cv::Vec3b( 79   ,255   ,175 );
	    colors[35    ] = cv::Vec3b( 63   ,255   ,191 );
	    colors[36    ] = cv::Vec3b( 47   ,255   ,207 );
	    colors[37    ] = cv::Vec3b( 31   ,255   ,223 );
	    colors[38    ] = cv::Vec3b( 15   ,255   ,239 );
	    colors[39     ] = cv::Vec3b( 0   ,255   ,255 );
	    colors[40     ] = cv::Vec3b( 0   ,239   ,255 );
	    colors[41     ] = cv::Vec3b( 0   ,223   ,255 );
	    colors[42     ] = cv::Vec3b( 0   ,207   ,255 );
	    colors[43     ] = cv::Vec3b( 0   ,191   ,255 );
	    colors[44     ] = cv::Vec3b( 0   ,175   ,255 );
	    colors[45     ] = cv::Vec3b( 0   ,159   ,255 );
	    colors[46     ] = cv::Vec3b( 0   ,143   ,255 );
	    colors[47     ] = cv::Vec3b( 0   ,127   ,255 );
	    colors[48     ] = cv::Vec3b( 0   ,111   ,255 );
	    colors[49     ] = cv::Vec3b( 0    ,95   ,255 );
	    colors[50     ] = cv::Vec3b( 0    ,79   ,255 );
	    colors[51     ] = cv::Vec3b( 0    ,63   ,255 );
	    colors[52     ] = cv::Vec3b( 0    ,47   ,255 );
	    colors[53     ] = cv::Vec3b( 0    ,31   ,255 );
	    colors[54     ] = cv::Vec3b( 0    ,15   ,255 );
	    colors[55     ] = cv::Vec3b( 0     ,0   ,255 );
	    colors[56     ] = cv::Vec3b( 0     ,0   ,239 );
	    colors[57     ] = cv::Vec3b( 0     ,0   ,223 );
	    colors[58     ] = cv::Vec3b( 0     ,0   ,207 );
	    colors[59     ] = cv::Vec3b( 0     ,0   ,191 );
	    colors[60     ] = cv::Vec3b( 0     ,0   ,175 );
	    colors[61     ] = cv::Vec3b( 0     ,0   ,159 );
	    colors[62     ] = cv::Vec3b( 0     ,0   ,143 );
    }
    cv::Vec3b& at( int i )
    {
    	assert( i>=0  && i<colors.size()  );
    	return colors[i];
    }

private:
    std::vector<cv::Vec3b> colors;
};


#endif //___FColorMap
