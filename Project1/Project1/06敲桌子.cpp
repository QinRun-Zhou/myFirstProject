#include<iostream>	
using namespace std;

int main56() {
	
	// 1.�����1��100��Щ����

	// 2.����100�������ҵ�������������Ϊ"������";

	// 3.�������� 7�ı�������λ��7��ʮλ��7
	// (7 14 21 28 ...) % 7 = 0; (7 17 27 37 ...) % 10 =7; (70 71 72 73 ...) / 10 = 7
	for (int i = 1; i <= 100; i++) {
		int a = 0;
		int b = 0;
		int c = 0;
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			cout << "������" << endl;
		}
		else {
			cout << i << endl;
		}
	}


	system("pause");
	return 0;
}