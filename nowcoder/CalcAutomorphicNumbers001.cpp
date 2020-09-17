#include<iostream>
#include<stdio.h>
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
}
int main()
{
	//
}
//class Solution {
//public:
//	string multiply(string num1, string num2) {
//		if (num1 == "0" || num2 == "0") {
//			return "0";
//		}
//		string ans = "0";
//		int m = num1.size(), n = num2.size();
//		for (int i = n - 1; i >= 0; i--) {
//			string curr;
//			int add = 0;
//			for (int j = n - 1; j > i; j--) {
//				curr.push_back(0);
//			}
//			int y = num2.at(i) - '0';
//			for (int j = m - 1; j >= 0; j--) {
//				int x = num1.at(j) - '0';
//				int product = x * y + add;
//				curr.push_back(product % 10);
//				add = product / 10;
//			}
//			while (add != 0) {
//				curr.push_back(add % 10);
//				add /= 10;
//			}
//			reverse(curr.begin(), curr.end());
//			for (auto &c : curr) {
//				c += '0';
//			}
//			ans = addStrings(ans, curr);
//		}
//		return ans;
//	}
//
//	string addStrings(string &num1, string &num2) {
//		int i = num1.size() - 1, j = num2.size() - 1, add = 0;
//		string ans;
//		while (i >= 0 || j >= 0 || add != 0) {
//			int x = i >= 0 ? num1.at(i) - '0' : 0;
//			int y = j >= 0 ? num2.at(j) - '0' : 0;
//			int result = x + y + add;
//			ans.push_back(result % 10);
//			add = result / 10;
//			i--;
//			j--;
//		}
//		reverse(ans.begin(), ans.end());
//		for (auto &c : ans) {
//			c += '0';
//		}
//		return ans;
//	}
//};