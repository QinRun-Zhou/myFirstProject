#include<iostream>
using namespace std;

int main23() {
	//1.单精度 float  4位
	//2.双精度 double 8位
	//默认情况下输出一个小数，会显示出6位有效数字
	float f1 = 3.1415926f;
	double d1 = 3.1415926;
	cout << "f1 = " << f1 << endl;
	cout << "f1占用内存空间为：" << sizeof(f1) << endl;
	cout << "d1 = " << d1 << endl;
	cout << "d2占用内存空间为：" << sizeof(d1) << endl;
	//科学计数法
	float f2 = 3e2; // 3 * 10 ^ 2
	cout << "f2 = " << f2 << endl;
	float f3 = 3e-2; // 3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;
	system("pause");
	return 0;
}