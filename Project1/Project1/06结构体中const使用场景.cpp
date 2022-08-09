#include<iostream>
#include<string>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

void printStudents(struct student s) {
	cout << " 姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
}
//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
//加const防止函数体中的误操作
/*void printStudentp(const struct student* p) {
	//p->age = 100;
	cout << " 姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}
int main1006() {
	//创建结构体变量
	struct student s = { "张三",18,100 };

	//打印学生信息
	printStudents(s);
	printStudentp(&s);
	system("pause");
	return 0;
}*/