#include<iostream>
#include<deque>
#include<sstream>
using namespace std;//using this std;
string BigNumMulitiply() {
	deque<int> deq;//first as interger.
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
	//the cicyle can deal this question.
	for (int i = deq.size() - 1; i >= 0; i--)
	{
		int temp = deq[i] + addflag;
		deq[i] = temp % 10;//claculate the before number % is the result and / is the rest numbers.
		addflag = temp / 10;//addflag can be 11  then the before number is 1./ is all together and % is the rest of it.
		//11 the together is 1
	}
	//the final addflag
	while (addflag != 0)
	{
		int t = addflag % 10;//only to calculate the rest of it.
		deq.push_front(t);//put it at the begin.������Ҫģ��ʵ��һ���򵥵��Զ��ۻ�ϵͳ��ʵ��Ͷ�ҡ�������Ʒ���˱ҡ���ѯ�����Ʒ����Ǯ����Ϣ�Ĺ��ܡ�

		addflag /= 10;//until addflag is zero.
	}
	for (auto c : deq)
	{
		cout << c;//print all c string.+
		std::ostringstream ss;//function as printf.
		ss << c;//print it in this display device.
		res = res + ss.str();//res as the last result.
	}
	return res;//the lat result.
	//now control my self to use computer.i am tired i do not want to use computer and keyborard.
	//unbelieved new to know about it.nothing i use this .
	//now i will continute to write three shape or continute to write mutliple numbers.
	//i do not know about it.
	//i want to finish ti.
}

int mainok() {
	return 0;
}