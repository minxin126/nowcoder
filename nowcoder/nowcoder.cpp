#include<iostream>
using namespace std;
int maintest() {
	double arr[5] = { 1,2,3,4,5 };
	double* p = arr;
	++p;
	double x = *++p;
	++* p;
	return 0;
}