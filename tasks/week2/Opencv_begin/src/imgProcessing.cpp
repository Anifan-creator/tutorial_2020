/**
*
* @file   imgProcessing.cpp
* @brief  数码管识别工程的图像处理部分
* @author Anifan.Cheng
* @email  zhenghw23@foxmail.com
* @version 1.0.0.1
* @date    2020.10.10
* --------------------------------------
* Change History ：
* <Date>    | <Version> | <Autuor> | <Description>
* 2020-10-10 | 1.0.0.1 | Anifan.Cheng | Create file
* ----------------------------------------
*/

//OpenCV  header
#include"LED_Distinguish.h"

/**
* @brief 将原图处理成单通道的清晰的数字
* @param src 原图对象
* @return 处理后的图片
*/
Mat imgProcessing(Mat src)
{
	Mat number_src = src; //原图
	Mat gra_out; ///灰度化之后的输出
	Mat bin_out; ///二值化之后的输出
	Mat dia_out;  ///膨胀后的输出
	Mat ero_out;  ///腐蚀之后的输出

	//**初次二值化
	//分开数码管发光的部分与不发光的（红色）部分
	number_src = (number_src > 130);
	namedWindow("首次二值化");
	imshow("首次二值化", number_src);


	//灰度化
	//三通道变单通道
	cvtColor(number_src, gra_out, COLOR_BGR2GRAY);
	namedWindow("灰度化");
	imshow("灰度化", gra_out);

	//**二值化
	//使像素点变成0和255
	bin_out = gra_out > 30;
	namedWindow("二值化");
	imshow("二值化", bin_out);

	//**膨胀
	//使数字连续
	Mat element_dia = getStructuringElement(MORPH_RECT, Size(9, 9), Point(-1, -1)); //内核
	dilate(bin_out, dia_out, element_dia, Point(-1, -1), 1); //膨胀
	namedWindow("膨胀后图像");
	imshow("膨胀后图像", dia_out);


	//**腐蚀
	//恢复发光管的宽度，避免过宽
	Mat element_ero = getStructuringElement(MORPH_RECT, Size(10, 10)); //内核
	erode(dia_out, ero_out, element_ero); //腐蚀

	//输出腐蚀后图像
	namedWindow("腐蚀后图像");
	imshow("腐蚀后图像", ero_out);

	return ero_out;
}