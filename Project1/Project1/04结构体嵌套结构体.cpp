#include<iostream>
#include<string>
using namespace std;

//定义学生结构体
struct student {
	string name;
	int age;
	int score;
};
//定义老师结构体
struct teacher {
	int id;
	string name;
	int age;
	struct student stu;
};


int main1004() {
	//结构体嵌套结构体
	//创建老师
	teacher t;
	t.id = 1000;
	t.name = "老王";
	t.age = 40;
	t.stu.name = "小王";
	t.stu.age = 18;
	t.stu.score = 100;
	cout << "老师编号：" << t.id << " 老师姓名；" << t.name << " 老师年纪：" << t.age 
		<< " 学生名：" << t.stu.name << " 学生年纪：" << t.stu.age << " 学生分数：" << t.stu.score << endl;
	system("pause");
	return 0;
}
