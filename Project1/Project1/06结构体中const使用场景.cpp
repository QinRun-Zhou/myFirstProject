#include<iostream>
#include<string>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

void printStudents(struct student s) {
	cout << " ������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;
}
//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
//��const��ֹ�������е������
/*void printStudentp(const struct student* p) {
	//p->age = 100;
	cout << " ������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
}
int main1006() {
	//�����ṹ�����
	struct student s = { "����",18,100 };

	//��ӡѧ����Ϣ
	printStudents(s);
	printStudentp(&s);
	system("pause");
	return 0;
}*/