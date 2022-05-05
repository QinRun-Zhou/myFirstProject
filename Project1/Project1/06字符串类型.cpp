#include<iostream>
using namespace std;
#include<string>
int main26() {
	//1.C风格字符串
	//注意事项 cahr 字符串名 []
	//注意事项2 等号后面 要用双引号 包含起来字符串
	char str1[] = "hello world";
	cout << str1 << endl;
	//2.C++风格字符串
	string str2 = "hello world";
	cout << str2 << endl;
	system("pause");
	return 0;
}