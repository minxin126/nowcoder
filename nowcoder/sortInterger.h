#pragma once
//tomorrow i will coding in the morning,is so hot.
//i need to a function to calculation some
#include<stdarg.h>
#include<vector>
using namespace std;//this must add
//max sort
//int N;
vector<int> center;
void getMaxsort(std::vector<int> sortData)
{
	
	for (int i = 0; i < sortData.size() - 1; i++)
	{
		for (int j = 0; j < sortData.size() - 1 - i; j++)
		{
			if (sortData[j] > sortData[j + 1])
			{
				int tem = sortData[j];
				sortData[j] = sortData[j + 1];
				sortData[j + 1] = tem;
			}
		}
	}
	for (int i = 0; i < sortData.size(); i++)
	{
		center.push_back(sortData[i]);	
	}	
}
//min sort
void getMinsort(vector<int>sortData)
{
	for (int i = 0; i < sortData.size() - 1; i++)
	{
		for (int j = 0; j < sortData.size() - 1 - i; j++)
		{
			if (sortData[j] < sortData[j + 1])
			{
				int tem = sortData[j];
				sortData[j] = sortData[j + 1];
				sortData[j + 1] = tem;
			}
		}
	}
	for (int i = 0; i < sortData.size(); i++)
	{
		center.push_back(sortData[i]);
	}
}