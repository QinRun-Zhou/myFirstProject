#include<iostream>
#include<string>
using namespace std;


//1.����ѧ���������ͣ�ѧ�����������������䣬������
//�Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
//�﷨ struct �������� {��Ա�б�}
struct Student {
	//ѧ�������б�
	//name��
	string name;
	//age
	int age;
	//score:
	int score;
}s3;

main() {

	//2.ͨ��ѧ�����ʹ�������ѧ��
	//2.1 struct Student s1
	struct Student s1;
	//��s1���Ը�ֵ��ͨ��.���ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 99;
	cout << "����: " << s1.name << " ���䣺" << s1.age << " ������" << s1.score;
	//2.2 struct Student s2 = {..}
	//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����

	system("pause");
	return 0;
}
