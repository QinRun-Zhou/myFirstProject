#include<iostream>
using namespace std;

int main53() {
	//do...while���
	//����Ļ�����0��9��10������
	int num = 0;
	int n2 = 0;
	do {
		cout << num << endl;
		num++;
	} while (num < 10);

	//do...while��whileѭ����������do...while����ִ��һ��ѭ�����
	while (n2<10) {
		cout << n2 << endl;
		n2++;
	}

	system("pauce");
	return 0;
}