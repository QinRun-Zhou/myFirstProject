#include<iostream>
using namespace std;
#include<string>
//�ṹ��ָ��
struct student {
	string name;
	int score;
	int age;
};

int main1003() {
	//1������ѧ���ṹ�����
	struct student s = { "zs",18,100 };
	//2��ͨ��ָ��ָ��ṹ�����
	struct student* p = &s;
	//3��ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ����ʽṹ�������ԣ���Ҫ���á�->��
	cout << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
	system("pause");
	return 0;
}