#include<iostream>
using namespace std;

int main33() {

	//1.ǰ�õ���
	int a = 10;
	++a;	// �ñ���+1
	cout << "a = " << a << endl;

	//2.���õ���
	int b = 10;
	b++;
	cout << "b = " << b << endl;

	//3.ǰ�ú��õ�����
	//ǰ�õ��� ���ñ���+1 Ȼ����б��ʽ����
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;

	//ǰ�õݼ�
	int a4 = 10;
	int b4 = --a4 * 10;
	cout << "a4 = " << a4 << endl;
	cout << "b4 = " << b4 << endl;
	
	//���õݼ�
	int a5 = 10;
	int b5 = a5-- * 10;
	cout << "a5 = " << a5 << endl;
	cout << "b5 = " << b5 << endl;
	system("pause");
	return 0;
}