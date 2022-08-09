#include<iostream>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;
//全局产量
const int c_g_a = 10;
const int c_g_b = 10;

int main1201() {

	//全局区

	//全局变量、静态变量、常量
	
	//创建普通局部变量
	int a = 10;
	int b = 10;

	cout << "局部变量a的地址为：" << (int)&a << endl;
	cout << "局部变量b的地址为：" << (int)&b << endl;

	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址为：" << (int)&g_b << endl;

	//静态变量
	static int s_a = 10;
	static int s_b = 10;

	cout << "静态变量s_a的地址为：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址为：" << (int)&s_b << endl;

	//常量
	const int c_a = 10;
	const int c_b = 10;
	cout << "常量c_a的地址为：" << (int)&c_a << endl;
	cout << "常量c_b的地址为：" << (int)&c_b << endl;

	//全局常量
	cout << "全局常量c_a的地址为：" << (int)&c_g_a << endl;
	cout << "全局常量c_b的地址为：" << (int)&c_g_b << endl;
	
	//字符串常量
	cout << "字符串常量地址为：" << (int)&"hello world" << endl;



	system("pause");
	return 0;
}