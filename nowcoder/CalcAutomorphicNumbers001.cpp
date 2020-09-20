#include<iostream>
#include<stdio.h>
#include<deque>
#include<sstream>
#include"CalcAutomorphicNumbers001.h"

using namespace std;
int CalcAutomorphicNumbers(int n)
{
	//every number must return it's self number.
	//the number must be it self.
	//the number sequence shape one number .the the length of the result with the litter number's lengths.
	//first input one number and then get the n*n then  get the string of last number of it
	//read string i know getline.
	int N;//the first number.
	while (cin >> N)
	{
		int m = N * N;
		//big number with big number.
	}
	for (int i = 0; i < 10; i++)
	{
		//	getchar
	}
	return 0;
}
int maincal001()
{
	//is to to do it.
	std::string s1;
	std::string s2;
	cin >> s1 >> s2;
	std::deque<int> deq(s1.size() + s2.size() - 1, 0);
	for (int i = 0; i < s1.size(); i++)
	{
		for (int j = 0; j < s2.size(); j++)
		{
			deq[i + j] += (s1[i] - '0')*(s2[j] - '0');//deq[i + j] = deq[i + j] +(s1[i] - '0')*(s2[j] - '0');
			cout << /*"i is :"*/ i << endl;
			cout << /*"j is :"*/ j << endl;
			cout << /*"resutl is"*/ deq[i + j] << endl;
			cout << "****************************" << endl;
		}
	}
	return 0;
}