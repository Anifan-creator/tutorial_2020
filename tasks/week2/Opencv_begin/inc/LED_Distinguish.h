#pragma once
/**
*
* @file   LED_Distinguish
* @brief  考核题目数码管识别
* @author Anifan.Cheng
* @email  zhenghw23@foxmail.com
* @version 1.0.0.1
* @date    2020.10.10
* --------------------------------------
* Remark 本程序仅完成对图像进行处理部分，尚未完成对数码管数字的识别功能
* --------------------------------------
* Change History ：
* <Date>    | <Version> | <Autuor> | <Description>
* 2020-10-10 | 1.0.0.1 | Anifan.Cheng | Create file
* ----------------------------------------
*/

//OpenCV library headers
#include<opencv2/opencv.hpp>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>

/*
*引用命名空间
*/
using namespace std;
using namespace cv;

/**
* @brief 将原图处理成单通道的清晰的数字
* @param src 原图对象
* @return 处理后的图片
*/
Mat imgProcessing(Mat src);