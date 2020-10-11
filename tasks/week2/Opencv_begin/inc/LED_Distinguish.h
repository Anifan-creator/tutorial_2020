#pragma once
/**
*
* @file   LED_Distinguish
* @brief  ������Ŀ�����ʶ��
* @author Anifan.Cheng
* @email  zhenghw23@foxmail.com
* @version 1.0.0.1
* @date    2020.10.10
* --------------------------------------
* Remark ���������ɶ�ͼ����д����֣���δ��ɶ���������ֵ�ʶ����
* --------------------------------------
* Change History ��
* <Date>    | <Version> | <Autuor> | <Description>
* 2020-10-10 | 1.0.0.1 | Anifan.Cheng | Create file
* ----------------------------------------
*/

//OpenCV library headers
#include<opencv2/opencv.hpp>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>

/*
*���������ռ�
*/
using namespace std;
using namespace cv;

/**
* @brief ��ԭͼ����ɵ�ͨ��������������
* @param src ԭͼ����
* @return ������ͼƬ
*/
Mat imgProcessing(Mat src);
