/**
*
* @file   test.cpp
* @brief  数码管识别的测试文件
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

//函数头文件
#include "LED_Distinguish.h"


char file_name[] = "sim_samples/sim_sample2.jpg";



int main(int argc,char** argv)
{
	if (argc != 2)
	{
		cout << " Usage: display_image ImageToLoadAndDisplay" << endl;
		return -1;
	}

	Mat number_src = imread(argv[1]);

	if (number_src.empty())
	{
		cout << "Could not open or find the image" << std::endl;
		return -1;
	}

	//输出原图
	namedWindow("数码管原图");
	imshow("数码管原图", number_src);
	
	Mat number_processed = imgProcessing(number_src);

	waitKey(0);
	return 0;
}


