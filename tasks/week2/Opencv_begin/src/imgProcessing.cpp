/**
*
* @file   imgProcessing.cpp
* @brief  �����ʶ�𹤳̵�ͼ������
* @author Anifan.Cheng
* @email  zhenghw23@foxmail.com
* @version 1.0.0.1
* @date    2020.10.10
* --------------------------------------
* Change History ��
* <Date>    | <Version> | <Autuor> | <Description>
* 2020-10-10 | 1.0.0.1 | Anifan.Cheng | Create file
* ----------------------------------------
*/

//OpenCV  header
#include"LED_Distinguish.h"

/**
* @brief ��ԭͼ����ɵ�ͨ��������������
* @param src ԭͼ����
* @return ������ͼƬ
*/
Mat imgProcessing(Mat src)
{
	Mat number_src = src; //ԭͼ
	Mat gra_out; ///�ҶȻ�֮������
	Mat bin_out; ///��ֵ��֮������
	Mat dia_out;  ///���ͺ�����
	Mat ero_out;  ///��ʴ֮������

	//**���ζ�ֵ��
	//�ֿ�����ܷ���Ĳ����벻����ģ���ɫ������
	number_src = (number_src > 130);
	namedWindow("�״ζ�ֵ��");
	imshow("�״ζ�ֵ��", number_src);


	//�ҶȻ�
	//��ͨ���䵥ͨ��
	cvtColor(number_src, gra_out, COLOR_BGR2GRAY);
	namedWindow("�ҶȻ�");
	imshow("�ҶȻ�", gra_out);

	//**��ֵ��
	//ʹ���ص���0��255
	bin_out = gra_out > 30;
	namedWindow("��ֵ��");
	imshow("��ֵ��", bin_out);

	//**����
	//ʹ��������
	Mat element_dia = getStructuringElement(MORPH_RECT, Size(9, 9), Point(-1, -1)); //�ں�
	dilate(bin_out, dia_out, element_dia, Point(-1, -1), 1); //����
	namedWindow("���ͺ�ͼ��");
	imshow("���ͺ�ͼ��", dia_out);


	//**��ʴ
	//�ָ�����ܵĿ�ȣ��������
	Mat element_ero = getStructuringElement(MORPH_RECT, Size(10, 10)); //�ں�
	erode(dia_out, ero_out, element_ero); //��ʴ

	//�����ʴ��ͼ��
	namedWindow("��ʴ��ͼ��");
	imshow("��ʴ��ͼ��", ero_out);

	return ero_out;
}