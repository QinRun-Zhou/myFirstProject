#include<iostream>
using namespace std;
#include<string>
struct student {
	string name;
	int age;
	int score;
};

//������ӡ��Ϣ����
//1.ֵ����
void printStudent1(struct student s) {
	s.age = 20;
	cout << "ֵ���ݴ�ӡѧ��������" << s.name << " ��ͣ�" << s.age << " ������" << s.score << endl;
}

//2.��ַ����
void printStudent2(struct student* p) {
	p->age = 40;
	cout << "��ַ���ݴ�ӡѧ��������" << p->name << " ��ͣ�" << p->age << " ������" << p->score << endl;
}

int main1005() {
	//�ṹ������������
	//��ѧ�����뵽һ�������У���ӡѧ������������Ϣ
	
	//�����ṹ�����
	struct student s={"����",18,100};
	
	//��ӡѧ����Ϣ
	printStudent1(s);
	cout << s.age << endl;
	printStudent2(&s);
	cout << s.age << endl;
	system("pause");
	return 0;
}