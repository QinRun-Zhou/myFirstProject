#include<iostream>
using namespace std;

int main96() {

	//ָ�������
	//����ָ����������е�Ԫ��

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;
	int* p = arr;  //����������������׵�ַ
	cout << "����ָ�������������һ��Ԫ�أ�" << *p << endl;
	//�����ý����ռ��4���ֽ�
	//p++�������4���ֽ�
	p++;	//��ָ���������ĸ��ֽ�
	cout << "����ָ������������ڶ���Ԫ�أ�" << *p << endl;
	
	cout << "����ָ���������" << endl;
	int* p2 = arr;
	for (int i = 0; i < 10; i++) {
	//	cout << i << endl;
		cout << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}