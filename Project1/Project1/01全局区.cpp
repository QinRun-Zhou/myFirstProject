#include<iostream>
using namespace std;

//ȫ�ֱ���
int g_a = 10;
int g_b = 10;
//ȫ�ֲ���
const int c_g_a = 10;
const int c_g_b = 10;

int main1201() {

	//ȫ����

	//ȫ�ֱ�������̬����������
	
	//������ͨ�ֲ�����
	int a = 10;
	int b = 10;

	cout << "�ֲ�����a�ĵ�ַΪ��" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ��" << (int)&b << endl;

	cout << "ȫ�ֱ���g_a�ĵ�ַΪ��" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ��" << (int)&g_b << endl;

	//��̬����
	static int s_a = 10;
	static int s_b = 10;

	cout << "��̬����s_a�ĵ�ַΪ��" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ��" << (int)&s_b << endl;

	//����
	const int c_a = 10;
	const int c_b = 10;
	cout << "����c_a�ĵ�ַΪ��" << (int)&c_a << endl;
	cout << "����c_b�ĵ�ַΪ��" << (int)&c_b << endl;

	//ȫ�ֳ���
	cout << "ȫ�ֳ���c_a�ĵ�ַΪ��" << (int)&c_g_a << endl;
	cout << "ȫ�ֳ���c_b�ĵ�ַΪ��" << (int)&c_g_b << endl;
	
	//�ַ�������
	cout << "�ַ���������ַΪ��" << (int)&"hello world" << endl;



	system("pause");
	return 0;
}