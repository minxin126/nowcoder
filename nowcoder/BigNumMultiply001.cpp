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
	int addflag = 0;//因为是队列，所有最早的元素，序号就会越大，那为什么不用栈，队列，先进先出。
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
		deq.push_front(t);//put it at the begin.
		addflag /= 10;//until addflag is zero.
	}
	for (auto c : deq)
	{
		cout << c;//print all c string.
		std::ostringstream ss;//function as printf.
		ss << c;//print it in this display device.
		res = res + ss.str();//res as the last result.
	}
	return res;//the lat result.
}

int mainok() {
	return 0;
}