#include<iostream>
using namespace std;

int main45() {
	//1.������ֻС������
	int a = 0;
	int b = 0;
	int c = 0;
	//2.�û�������ֻС������
	cout << "������С��a�����أ�" << endl;
	cin >> a;
	cout << "������С��b�����أ�" << endl;
	cin >> b;
	cout << "������С��c�����أ�" << endl;
	cin >> c;
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	//3.�ж�
	if (a > b)
	{
		if (a > c) 
		{
			cout << "a�����ص�" << endl;
		}
		else 
		{
			cout << "c�����ص�" << endl;
		}
	}
	else
	{
		if (b > c) 
		{
			cout << "b�����ص�" << endl;
		}
		else 
		{
			cout << "c�����ص�" << endl;
		}
	}
	
	system("pause");
	return 0;
}
