#include<iostream>
using namespace std;

//����������ʽ
//1.�޲��޷�
void test01() {
	cout << "this is test01" << endl;
}
//2.�в��޷�
void test02(int a) {
	cout << "this is test02 a = " << a << endl;
}
//3.�޲��з�
int test03() {
	cout << "this is test03 " << endl;
	return 1000;
}
//4.�в��з�
int test04(int a) {
	cout << "this is test04 a = " << a << endl;
	return a;
}

int main84() {
	int a = 10000;
	test01();
	test02(a);
	test03();
	test04(a);

	system("pause");
	return 0;
}