#include<iostream>	
using namespace std;

//��ά���鰸��-���Գɼ�ͳ��

int main78() {
	// 1.�������飺3��3��
	int score[3][3] = {
		{100,100,100},
		{30,90,98},
		{60,70,20}
	};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << score[i][j] << " ";
		}
		cout << endl;
	}
	// 2.ͳ��ÿ���˵��ܺͷ���
	string name[3] = { "����","����","����" };
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += score[i][j];
			cout << score[i][j] << " ";
		}
		cout << name[i] << "���˵��ܷ�Ϊ" << sum << endl;
	}

	// 2.ͳ�ƿ��Գɼ�����ÿ�е�3�����
	system("pause");
	return 0;
}