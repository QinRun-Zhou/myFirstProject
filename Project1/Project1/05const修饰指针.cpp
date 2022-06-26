#include<iostream>
using namespace std;

int main95() {
	int a = 10;
	int b = 10;
	//1、常量指针,值不可以改
	const int* p = &a;
	p = &b;

	//2、指针常量,指针不可改
	int* const p2 = &a;
	*p2 = b;

	//3、const修饰指针和常量
	const int* const p3 = &a;
	//错误一：*p3 = 100;
	//错误二：p3 = &b;


	system("pause");
	return 0;
}