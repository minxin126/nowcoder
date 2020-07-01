#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
using namespace std;
//这个程序调的时间挺长
//基本思想是按照题目要求，即从左向右扫描数据，计算以每个数据作为起始桩，需要走的树桩的最大数目
int main() {
	int N;
	while (cin >> N) {
		vector<int>num(N, 0);//存储所有的数
		vector<int>label(N, 0);//最长的排序序号
		for (int i = 0; i < N; i++)
			cin >> num[i];
		int temp = 0, max = 0, max1 = 0;
		int i, j, k;
		for (i = 0; i < (int)(num.size() - 1); i++) {
			temp = num[i];
			label[i] = 1;
			for (j = i + 1; j < num.size(); j++) {
				k = j;
				if (num[j] > temp) {
					label[j] = 2;
					k = k - 1;
					while (k >= i) {
						if (label[j] <= label[k] && num[j] > num[k])//出现大数就需要比较排序量
							label[j] = label[k] + 1;
						k = k - 1;
					}
				}
				else label[j] = 0;
				if (label[j] > max)max = label[j];//存储最大的长度
			}
		}
		cout << max << endl;
	}
	return 0;
}