/**
*
* @file   longestCommon.cpp
* @brief  ���������������ַ��������е��������׺
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

/**
* ����ͷ�ļ�
*/
#include<iostream>
#include<vector>

/**
* @brief �����ַ�������Ԫ�ص��������׺
* @param strs �ַ���������
* @return �����ַ�������������׺,����޹�����׺�򷵻ؿ��ַ���
*/
std::string longestCommon(std::vector<std::string>& strs)
{
	int i = 0;  ///��¼��׺��ͬ���ַ���

	 //��һ���ַ����ֱ�������ĩβ�ַ��Ƚ�
	std::vector<std::string>::iterator it0 = strs.begin(); ///������¼��һ���ַ���������������
	std::vector<std::string>::iterator it;

	while (true)  //����ѭ��
	{
		for (it = it0 + 1; it != strs.end(); it++)  //�ӵڶ�����ʼ�����ַ����ֱ����һ���Ƚ�
		{
			//������ĳ���ַ����ĳ���С��i+1ʱ������֮ǰ��¼����ͬ��i��ĩβ�ַ�
			if (signed((*it0).length()) - 1 - i < 0 || signed((*(it)).length()) - 1 - i < 0)
			{
				if (i == 0) return "";
				else return (*it0).substr((*it0).length() - i, i);
			}

			//����ĳ�����ַ�����ĩβ��i+1Ϊ�в�ͬʱ������֮ǰ��¼��ͬ��i��ĩβ�ַ�
			if ((*it0)[(*it0).length() - 1 - i] != (*(it))[(*(it)).length() - 1 - i])
			{
				if (i == 0) return "";
				else return (*it0).substr((*it0).length() - i, i);
			}
		}
		i++;  //i��������ǰ����Ƿ��и����Ĺ�����׺
	}

	return ""; //��ʽ�ϵķ�����䣬ʵ���ϲ����ᵽ����
}
