#include<iostream>
using namespace std;

int main23() {
	//1.������ float  4λ
	//2.˫���� double 8λ
	//Ĭ����������һ��С��������ʾ��6λ��Ч����
	float f1 = 3.1415926f;
	double d1 = 3.1415926;
	cout << "f1 = " << f1 << endl;
	cout << "f1ռ���ڴ�ռ�Ϊ��" << sizeof(f1) << endl;
	cout << "d1 = " << d1 << endl;
	cout << "d2ռ���ڴ�ռ�Ϊ��" << sizeof(d1) << endl;
	//��ѧ������
	float f2 = 3e2; // 3 * 10 ^ 2
	cout << "f2 = " << f2 << endl;
	float f3 = 3e-2; // 3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;
	system("pause");
	return 0;
}