#include<iostream>
using namespace std;

int main54() {
	int num = 100;
	// 1.���100 ~ 999
	// 2.�����λ��ʮλ����λ
	// 3.����λ��3�η�֮�͵��ڱ���
	do {
		int a = 0;
		int b = 0;
		int c = 0;
		a = num % 10;	//��ȡ��λ
		b = num / 10 % 10;	//��ȡʮλ
		c = num / 100;	//��ȡ��λ
		if (a * a * a + b * b * b + c * c * c == num) {
			cout << num << endl;
		}

		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}