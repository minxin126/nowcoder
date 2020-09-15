#include<iostream>
#include"ArithSequence.h"
using namespace std;
int sequence(int n)
{
	return n * (3 * n + 1) / 2;
}
int mainseq()
{
	int N;
	while (cin >> N)
	{
		cout << sequence(N) << endl;
	}
	return 0;
}