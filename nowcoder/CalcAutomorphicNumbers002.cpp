#include<iostream>
#include<deque>
#include<sstream>
std::string BigNumMultiply(std::string s1, std::string s2) {
	//��¼���ս��
	std::string res = "";
	//ʹ��deque����Ϊ���ֽ�λʱ�����ڶ���ǰ�������ݣ�Ч�ʱ�vector�ߣ���С��Ϊ��С
	std::deque<int> vec(s1.size() + s2.size() - 1, 0);
	for (int i = 0; i < s1.size(); ++i) {
		for (int j = 0; j < s2.size(); ++j) {
			vec[i + j] += (s1[i] - '0')*(s2[j] - '0');//��¼��˽��zero no have special reason,but we have to use it.is the number lonely.is not all ,just like calculate.
			//we have get the number we need,without consider including addflag.
		}
	}
	//��λ����
	int addflag = 0;
	//�������������Ϊ����ߵ�ֵΪ���λ�����ұߵ�ֵ�����λ����λ����Ҫ�ӵ�λ��ʼ
	for (int i = vec.size() - 1; i >= 0; --i) {
		int temp = vec[i] + addflag;//��ǰֵ���Ͻ�λֵ
		vec[i] = temp % 10;//��ǰֵ is the rest number.sometime we have.now we  calculate the origin number.
		addflag = temp / 10;//��λֵ we use this to calcualte to  add flag,but the  added flag must add first then to calculate this.i have understand this function.
	}//we have calculate the result.

	//����н�λ������λ�ӵ�����ͷ�� i know this is the last addflag.
	while (addflag != 0) {
		int t = addflag % 10;//record all the addNumbers.
		vec.push_front(t);//put at the begin.
		addflag /= 10;//addflag=addflag/10, save all addflag indeque.
	}
	for (auto c : vec) {
		std::cout << c;
		std::ostringstream ss;//origin for iostream to wtrite string.
		ss << c;// just get the deque information to string
		res = res + ss.str();
	}
	return res;
}
int main() {
	std::string str1, str2;
	while (std::cin >> str1 >> str2)
	{
		std::cout << str1 << "*" << str2 << "=" << std::endl;
		std::cout << BigNumMultiply(str1, str2) << std::endl;
	}
	return 0;
}