#include<iostream>
#include<deque>
#include<sstream>
using namespace std;
std::string BigNumMulitiply() {
	std::deque<string> deq;
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
}
int main() {
}