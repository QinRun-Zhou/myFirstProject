#include<iostream>
using namespace std;

int* func2() {
	//����new�ؼ��� ���Խ����ݿ��ٵ�����
	int* p = new int(10);
	return p;
}

int main1203() {
	//�ڶ�����������
	int* p = func2();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	system("pause");
	return 0;
}