#include<iostream>
using namespace std;
int main27() {
	bool flag = true;
	cout << "bool类型true的值：" << flag << endl;
	//所占内存空间为 1位
	cout << "bool类型所占内存空间：" << sizeof(bool) << endl;
	flag = false;
	cout << "bool类型false的值：" << flag << endl;
	system("pause");
	return 0;
}