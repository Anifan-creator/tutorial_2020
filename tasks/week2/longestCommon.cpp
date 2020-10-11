/**
*
* @file   longestCommon.cpp
* @brief  包含函数：返回字符串数组中的最长公共后缀
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

/**
* 包含头文件
*/
#include<iostream>
#include<vector>

/**
* @brief 返回字符串数组元素的最长公共后缀
* @param strs 字符数组容器
* @return 返回字符数组的最长公共后缀,如果无公共后缀则返回空字符串
*/
std::string longestCommon(std::vector<std::string>& strs)
{
	int i = 0;  ///记录后缀相同的字符数

	 //第一个字符串分别与后面的末尾字符比较
	std::vector<std::string>::iterator it0 = strs.begin(); ///单独记录第一个字符串，避免代码过长
	std::vector<std::string>::iterator it;

	while (true)  //无限循环
	{
		for (it = it0 + 1; it != strs.end(); it++)  //从第二个开始所有字符串分别与第一个比较
		{
			//当发现某个字符串的长度小于i+1时，返回之前记录的相同的i个末尾字符
			if (signed((*it0).length()) - 1 - i < 0 || signed((*(it)).length()) - 1 - i < 0)
			{
				if (i == 0) return "";
				else return (*it0).substr((*it0).length() - i, i);
			}

			//发现某两个字符串的末尾第i+1为有不同时，返回之前记录相同的i个末尾字符
			if ((*it0)[(*it0).length() - 1 - i] != (*(it))[(*(it)).length() - 1 - i])
			{
				if (i == 0) return "";
				else return (*it0).substr((*it0).length() - i, i);
			}
		}
		i++;  //i自增，向前检查是否有更长的公共后缀
	}

	return ""; //形式上的返回语句，实际上并不会到这里
}
