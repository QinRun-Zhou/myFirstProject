#include<iostream>
using namespace std;
#include<string>

//�ṹ������
//1.����ṹ��
struct Student {
	//name
	string	name;
	//age
	int age;
	//score
	int score;
};


int main1002() {
	//2.�����ṹ������
	struct Student stuArray[]{
		{"zs",18,100},
		{"ls",28,99},
		{"ww",38,66}
	};

	//3.���ṹ�������е�Ԫ�ظ�ֵ
	stuArray[2].name = "����";
	stuArray[2].age = 80;
	stuArray[2].score = 60;
	
	//4.�����ṹ������
	for (int i = 0; i < 3; i++) {
		cout << "������" << stuArray[i].name << "���䣺" << stuArray[i].age << "������" << stuArray[i].score << endl;
	}
	system("pause");
	return 0;
}