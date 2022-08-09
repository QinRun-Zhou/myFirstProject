#include<iostream>
using namespace std;
#include<string>
struct student {
	string name;
	int age;
	int score;
};

//创建打印信息函数
//1.值传递
void printStudent1(struct student s) {
	s.age = 20;
	cout << "值传递打印学生姓名：" << s.name << " 年纪：" << s.age << " 分数：" << s.score << endl;
}

//2.地址传递
void printStudent2(struct student* p) {
	p->age = 40;
	cout << "地址传递打印学生姓名：" << p->name << " 年纪：" << p->age << " 分数：" << p->score << endl;
}

int main1005() {
	//结构体做函数参数
	//将学生传入到一个参数中，打印学生身上所有信息
	
	//创建结构体变量
	struct student s={"张三",18,100};
	
	//打印学生信息
	printStudent1(s);
	cout << s.age << endl;
	printStudent2(&s);
	cout << s.age << endl;
	system("pause");
	return 0;
}