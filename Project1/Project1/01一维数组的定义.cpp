#include<iostream>
using namespace std;

int main71() {
	//�������ֶ��巽��
	/*
		1. �������� ������[ ���鳤�� ];
		2. �������� ������[ ���鳤�� } = { value1 ,value2 ,value3 ,... };
		3. �������� ������[] = { value1 ,value2 ,value3 ,...};
	*/

	// 1.�������� ������[ ���鳤�� ]
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
		// ��������Ԫ��
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
	// 2.�������� ������[ ���鳤�� ] = { value1 ,value2 ,value3 ,... };
	int arr1[5] = { 10,20,30 };	//����ڳ�ʼ������û��ȫ����д������0�������
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << endl;
	}
	// 3.�������� ������[] = { value ,value2 ,value3 ,...};
	int arr2[] = { 90,80,70,60,50,40,30,20,10 };
	for (int i = 0; i < 10; i++) {
		cout << arr2[i] << endl;
	}
	cout << arr2[8] << endl;
	system("pause");

	return 0;
}