#pragma once
#include<iostream>
using namespace std;
class animal {
	int age;
	int name;
	char shape;
public:animal()
{
}/*
	   void getInfo();
	   void setInfo();*/

	   void   getInfo() {
		   cout << "hello cat";
	   }
	   void    setInfo() {
		   cout << "set hello";
	   }
};