#include<iostream>
#include<string>
using namespace std;
//�ṹ�������û��Զ�����������ͣ������û��洢��ͬ����������

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
}s3,s4;

main1001() {

	//2.ͨ��ѧ�����ʹ�������ѧ��
	//2.1 struct Student s1
	struct Student s1;//struct���ۿ���ʡ��

	//��s1���Ը�ֵ��ͨ��.���ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 99;
	cout << "����: " << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;
	//2.2 struct Student s2 = {..}
	struct Student s2 = { "����",20,88 };
	cout << "����: " << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;
	//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����
	s3.name = "����";
	s3.age = 18;
	s3.score = 99;
	cout << "����: " << s3.name << " ���䣺" << s3.age << " ������" << s3.score << endl;
	s4.name = "��6";
	cout << "s4.name=" << s4.name<<endl;
	system("pause");
	return 0;
}
