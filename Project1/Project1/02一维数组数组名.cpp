#include<iostream>
using namespace std;

int main72() {
	long long arr[5] = { 1,2,3,4,5 };
	//��ȡ������ռ���ڴ�ռ��С
	cout << sizeof(arr) << endl;
	//��ȡ������Ԫ�ظ���
	cout << sizeof(arr) / sizeof(arr[0]) << endl;
	//��ȡ�����׵�ַ��&��arr[0]��������
	cout << arr << endl;
	cout << (int)arr << endl;
	cout << (int)&arr[0] << endl;
	cout << (int)&arr[1] << endl;	//ÿ��Ԫ�����8���ڴ�ռ�

	//�������ǳ����������Խ��и�ֵ����
	system("pause");
	return 0;
}