#include<iostream>
using namespace std;

int main95() {
	int a = 10;
	int b = 10;
	//1������ָ��,ֵ�����Ը�
	const int* p = &a;
	p = &b;

	//2��ָ�볣��,ָ�벻�ɸ�
	int* const p2 = &a;
	*p2 = b;

	//3��const����ָ��ͳ���
	const int* const p3 = &a;
	//����һ��*p3 = 100;
	//�������p3 = &b;


	system("pause");
	return 0;
}