#include<iostream>	
using namespace std;

int main52() {
	//������������ �����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	//1.ϵͳ���������
	int num = rand() % 100 + 1;
	cout << num << endl;
	//2.��ҽ��в²�
	int val = 0;  //������������
	while (true) {
		cin >> val;
		//3.�ж���Ҳ²�
		if (val > num) {
			cout << "�²����" << endl;
		}
		else if (val < num) {
			cout << "�²��С" << endl;
		}
		else {
			cout << "�¶���" << endl;
			break;
		}
		//�¶�  �˳���Ϸ

		//�´�  ��ʾ�µĽ�� ������С  ����ѭ��
	}
	system("pause");
	return 0;
}