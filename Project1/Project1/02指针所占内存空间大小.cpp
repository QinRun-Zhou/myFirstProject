#include<iostream>
using namespace std;

int main92() {
	int a = 10;
	int* p = &a;

	// x86��32λϵͳ��x64����64λ����ϵͳ
	// x86ָ��ռ4�ֽڣ�x64ָ��ռ8���ֽڣ�������ʲô��������
	cout << "sizeof int a = " << sizeof(a) << endl;
	cout << "sizeof int * = " << sizeof(p) << endl;


	cout << "sizeof (int *) = " << sizeof(int*) << endl;
	cout << "sizeof (float *) = " << sizeof(float*) << endl;
	cout << "sizeof (double *) = " << sizeof(double*) << endl;
	cout << "sizeof (char *) = " << sizeof(char*) << endl;
	system("pause");
	return 0;
}