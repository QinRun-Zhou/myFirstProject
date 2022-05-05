#include<iostream>
using namespace std;

/*
标识符命名规则
1.标识符不可以是关键字
2.标识符是由字母、数字、下划线构成
3.标识符第一个字符只能是字母或下划线
4.标识符是区分大小写的
*/
int main6() {
	int abc = 10;
	int _abc = 20;
	int _123abc = 30;
	// int 123abc = 40; 报错
	cout << abc << _abc << _123abc << endl;
	int num1 = 100;
	int num2 = 200;
	int sum = num1 + num2;
	cout << sum << endl;
	system("pause");
	return 0;
}