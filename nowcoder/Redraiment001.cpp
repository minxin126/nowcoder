#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
using namespace std;
//����������ʱ��ͦ��
//����˼���ǰ�����ĿҪ�󣬼���������ɨ�����ݣ�������ÿ��������Ϊ��ʼ׮����Ҫ�ߵ���׮�������Ŀ
int main() {
	int N;
	while (cin >> N) {
		vector<int>num(N, 0);//�洢���е���
		vector<int>label(N, 0);//����������
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
						if (label[j] <= label[k] && num[j] > num[k])//���ִ�������Ҫ�Ƚ�������
							label[j] = label[k] + 1;
						k = k - 1;
					}
				}
				else label[j] = 0;
				if (label[j] > max)max = label[j];//�洢���ĳ���
			}
		}
		cout << max << endl;
	}
	return 0;
}