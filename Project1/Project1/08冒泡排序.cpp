#include<iostream>
using namespace std;

//����1��������׵�ַ������2������ĳ���
void bublingSort(int* arr,int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len-i-1; j++) {
			//���j>j+1��ֵ  ����������
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printArray(int* arr, int len) {
	for (int i = 1; i < len; i++) {
		cout << arr[i] << endl;
	}
}
int main98() {
	//1���ȴ�������
	int arr[10] = { 4,3,2,6,8,9,10,1,7,5 };
	//2�����鳤��
	int len = sizeof(arr) / sizeof(arr[0]);
	//3��create function inpliment bubling sort
	bublingSort(arr, len);
	//3����ӡ����������
	printArray(arr, len);
	system("pause");
	return 0;
}