#include<iostream>
using namespace std;

int main92() {
	int a = 10;
	int* p = &a;

	// x86是32位系统，x64就是64位操作系统
	// x86指针占4字节，x64指针占8个字节，不管是什么数据类型
	cout << "sizeof int a = " << sizeof(a) << endl;
	cout << "sizeof int * = " << sizeof(p) << endl;


	cout << "sizeof (int *) = " << sizeof(int*) << endl;
	cout << "sizeof (float *) = " << sizeof(float*) << endl;
	cout << "sizeof (double *) = " << sizeof(double*) << endl;
	cout << "sizeof (char *) = " << sizeof(char*) << endl;
	system("pause");
	return 0;
}