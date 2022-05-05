#include<iostream>
using namespace std;

//值传递
//定义函数，实现两个数字进行交换函数
void swap(int num1, int num2) {
	cout << "交换前: " << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后: " << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}

int main83() {
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << a << "  " << b << endl;
	system("pause");
	return 0;
}