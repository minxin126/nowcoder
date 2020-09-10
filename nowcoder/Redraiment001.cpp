#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
using namespace std;
//这个程序调的时间挺长
//基本思想是按照题目要求，即从左向右扫描数据，计算以每个数据作为起始桩，需要走的树桩的最大数目
//这个程序看的时间挺长，是一个动态规划的问题。看的话大致明白了。自己写的话还有问题。
int mainold()
{
	int N;
	while (cin >> N) {
		//using vector can be array.int num[i].
		vector<int>num(N, 0);//存储所有的数
		vector<int>label(N, 0);//最长的排序序号
		for (int i = 0; i < N; i++)
			cin >> num[i];//just put in it.
		int temp = 0, max = 0, max1 = 0;
		int i, j, k;
		for (i = 0; i < (int)(num.size() - 1); i++) {
			temp = num[i];
			label[i] = 1;//
			for (j = i + 1; j < num.size(); j++) {//compare number or right in the number.
				k = j;//jsut don not want to move j.
				if (num[j] > temp) {
					//right is biger
					label[j] = 2;//add to 2
					k = k - 1;//k as the the center pointer.
					while (k >= i) {//keep at the least time will finish it.
						if (label[j] <= label[k] && num[j] > num[k])//出现大数就需要比较排序量
							label[j] = label[k] + 1;//all number is to compare.
						//i think i can understand it's idea.
						k = k - 1;//every number is to compare.
					}
				}
				else label[j] = 0;//small then size it to zero.Dynamic first finish the part of root.
				if (label[j] > max)max = label[j];//存储最大的长度
			}
		}
		cout << max << endl;
	}
	//
	return 0;
}