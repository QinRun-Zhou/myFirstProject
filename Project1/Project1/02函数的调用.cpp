#include<iostream>
using namespace std;

int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int main82() {
	//main函数中调用add函数
	int a = 10;
	int b = 20;
	int c = add(a, b);
	c = add(c, b);
	cout << c << endl;
	
	system("pause");
	return 0;
}