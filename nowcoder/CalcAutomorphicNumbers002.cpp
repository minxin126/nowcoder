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
			vec[i + j] += (s1[i] - '0')*(s2[j] - '0');//��¼��˽��
		}
	}
	//��λ����
	int addflag = 0;
	//�������������Ϊ����ߵ�ֵΪ���λ�����ұߵ�ֵ�����λ����λ����Ҫ�ӵ�λ��ʼ
	for (int i = vec.size() - 1; i >= 0; --i) {
		int temp = vec[i] + addflag;//��ǰֵ���Ͻ�λֵ
		vec[i] = temp % 10;//��ǰֵ
		addflag = temp / 10;//��λֵ
	}
	//����н�λ������λ�ӵ�����ͷ��
	while (addflag != 0) {
		int t = addflag % 10;
		vec.push_front(t);
		addflag /= 10;
	}
	for (auto c : vec) {
		std::ostringstream ss;
		ss << c;
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