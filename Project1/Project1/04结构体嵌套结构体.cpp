#include<iostream>
#include<string>
using namespace std;

//����ѧ���ṹ��
struct student {
	string name;
	int age;
	int score;
};
//������ʦ�ṹ��
struct teacher {
	int id;
	string name;
	int age;
	struct student stu;
};


int main1004() {
	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	teacher t;
	t.id = 1000;
	t.name = "����";
	t.age = 40;
	t.stu.name = "С��";
	t.stu.age = 18;
	t.stu.score = 100;
	cout << "��ʦ��ţ�" << t.id << " ��ʦ������" << t.name << " ��ʦ��ͣ�" << t.age 
		<< " ѧ������" << t.stu.name << " ѧ����ͣ�" << t.stu.age << " ѧ��������" << t.stu.score << endl;
	system("pause");
	return 0;
}
