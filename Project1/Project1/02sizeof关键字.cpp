#include<iostream>
using namespace std;

int main22() {
	short num1 = 10;
	int num2 = 20;
	long num3 = 30;
	long long num4 = 40;
	cout << "short占用的内存空间为：" << sizeof(num1) << endl;
	cout << "int占用的内存空间为：" << sizeof(num2) << endl;
	cout << "long占用的内存空间为：" << sizeof(num3) << endl;
	cout << "long long 占用的内存空间为：" << sizeof(num4) << endl;
	system("pause");
	return 0;
}