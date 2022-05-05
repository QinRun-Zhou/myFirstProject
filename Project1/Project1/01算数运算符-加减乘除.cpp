#include<iostream>
using namespace std;

int main31() {
	//算数运算符，加减乘除
	int a1 = 10;
	int b1 = 20;
	int c1 = 0;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;	//两个整数相除 结果依然是整数，将小数部分去除
	//cout << a1 / c1 << endl;	//除数不能为0
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl;	//运算的结果也可以是小数
	system("pause");
	return 0;
}