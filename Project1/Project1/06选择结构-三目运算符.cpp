#include<iostream>
using namespace std;

int main46() {
	// 三目运算符

	//创建三个变量 a b c
	int a = 220;
	int b = 23;
	int c = 0;
	//将a和b作比较，将变量最大的赋值给c
	c = (a > b ? a : b);
	cout << "c = " << c << endl;

	(a > b ? a : b) = 300;
	cout << "a = " << a << endl;
	system("pause");
	return 0;
}