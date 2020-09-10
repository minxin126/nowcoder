#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
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
int main()
{
	int N;
	//cout << "please input N:";
	while (cin >> N)
	{
		//cout << "you have input N!" << endl;
		vector<int> sortData(N, 0);
		for (int i = 0; i < sortData.size(); i++)
		{
			cin >> sortData[i];
		};
		int iSortFlag;
		//cout << "please input Flag:";
		cin >> iSortFlag;

		if (iSortFlag == 0)
		{
			getMaxsort(sortData);
			/*		for (int i = 0; i < sortData.size(); i++)
					{
						cout << center[i] << " ";
					}
					sortData.clear();
					center.clear();*/
		}
		else if (iSortFlag == 1)
		{
			getMinsort(sortData);
		}

		for (int i = 0; i < sortData.size() - 1; i++)
		{
			cout << center[i] << " ";
		}
		cout << center[N - 1] << endl;

		sortData.clear();
		center.clear();
	}
}