#include<iostream>
using namespace std;

int main93() {
	
	//空指针
	//1.空指针用于给指针变量进行初始化;

	int* p = NULL;

	//2.空指针是不可以进行访问的

	*p = 100;

	system("pause");
	return 0;
}