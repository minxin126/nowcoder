#include<iostream>
#include<deque>
#include<sstream>
using namespace std;//using this std;
string BigNumMulitiply() {
	deque<string> deq;
	string res;
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		for (int i = 0; i < str1.size(); i++)
		{
			for (int j = 0; j < str2.size(); j++)
			{
				deq[i + j] = (str1[i] - '0')*(str2[j] - '0');
			}
		}
	}
	int addflag = 0;//��Ϊ�Ƕ��У����������Ԫ�أ���žͻ�Խ����Ϊʲô����ջ�����У��Ƚ��ȳ���

	for (int i = deq.size() - 1; i >= 0; i--)
	{
	}
	//deq[i] = deq[i] + addflag;

	return res;
}

int mainok() {
	return 0;
}