#include<iostream>
using namespace std;
int main21() {
/*
1.短整型： short 2字节
2.整形：   int   4字节
3.长整形   long  W4字节,L32位 4字节,L64位 8字节
4.长长整形 long long 8字节
*/
	short a = 10;
	int b = 20;
	long c = 30;
	long long d = 40;

	cout << "num1 = " << a << endl;
	cout << "num2 = " << b << endl;
	cout << "num3 = " << c << endl;
	cout << "num4 = " << d << endl;
	system("pause");
	return 0;
}