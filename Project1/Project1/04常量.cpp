#include<iostream>
using namespace std;
//常量的定义方式
//1.#define宏常量

#define Day 7 


int main4() {

	//2.const修饰的变量
	const int Month = 365;
	// Day = 8; //报错，宏量不可以修改
	cout << "一周里总共有： " << Day << " 天" << endl;
	cout << "平年里总共有： " << Month << " 天" << endl;


	system("pause");
	return 0;
}