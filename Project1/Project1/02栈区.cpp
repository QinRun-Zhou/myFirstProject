#include<iostream>
using namespace std;
//ջ������ע������  --- ��Ҫ���ؾֲ������ĵ�ַ
//ջ���������б����������ٺ��ͷ�


int* func() {
	int a = 10;	//�ֲ����� �����ջ����ջ���������ں���ִ����ɺ��Զ��ͷ�
	return &a;	//���ؾֲ������ĵ�ַ
}

int main1202() {
	
	//����func�����ķ���ֵ

	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	system("pause");
	return 0;
}