#include<iostream>
using namespace std;

int main46() {
	// ��Ŀ�����

	//������������ a b c
	int a = 220;
	int b = 23;
	int c = 0;
	//��a��b���Ƚϣ����������ĸ�ֵ��c
	c = (a > b ? a : b);
	cout << "c = " << c << endl;

	(a > b ? a : b) = 300;
	cout << "a = " << a << endl;
	system("pause");
	return 0;
}