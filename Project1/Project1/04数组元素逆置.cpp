#include<iostream>
using namespace std;

int main74() {
	//ʵ������Ԫ������
	//1.��������
	int arr[5] = { 3,4,2,5,1 };
	int start = 0;	//��ʼ�±�
	int end = sizeof(arr) / sizeof(arr[0]) - 1;	//�����±�
	cout << "����ǰ��" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
	while (start < end) {
		// Ԫ�ػ���
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		// �±����
		start++;
		end--;
	}
	cout << "���ú�" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}