#include<iostream>
using namespace std;

int main61() {
	//break��ʹ��ʱ��
	
	//1. ������switch�����
	cout << "1. ��ͨ" << endl;
	cout << "2. ����" << endl;
	cout << "3. ����" << endl;
	int select = 0;
	cin >> select;
	switch (select) {
	case 1:
		cout << "��ѡ�������ͨ�Ѷ�" << endl;
		break;
	case 2:
		cout << "��ѡ����������Ѷ�" << endl;
		break;
	case 3:
		cout << "��ѡ����ǵ����Ѷ�" << endl;
		break;
	}

	//2. ������ѭ�������
	for (int i = 0; i < 10; i++)
	{
		if (i == 5) {
			break;
		}
		cout << i << endl;
	}

	//3. ������Ƕ��ѭ�������
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;
			}
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}