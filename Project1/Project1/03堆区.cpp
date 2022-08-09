#include<iostream>
using namespace std;

int* func2() {
	//利用new关键字 可以将数据开辟到堆区
	int* p = new int(10);
	return p;
}

int main1203() {
	//在堆区开辟数据
	int* p = func2();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	system("pause");
	return 0;
}