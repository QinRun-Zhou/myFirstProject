#include<iostream>
using namespace std;

//ֵ����
//���庯����ʵ���������ֽ��н�������
void swap(int num1, int num2) {
	cout << "����ǰ: " << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "������: " << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}

int main83() {
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << a << "  " << b << endl;
	system("pause");
	return 0;
}