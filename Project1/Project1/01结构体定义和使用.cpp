#include<iostream>
#include<string>
using namespace std;
//结构体属于用户自定义的数据类型，允许用户存储不同的数据类型

//1.创建学生数据类型：学生包括（姓名，年龄，分数）
//自定义数据类型，一些类型集合组成的一个类型
//语法 struct 类型名称 {成员列表}
struct Student {
	//学生属性列表：
	//name：
	string name;
	//age
	int age;
	//score:
	int score;
}s3,s4;

main1001() {

	//2.通过学生类型创建具体学生
	//2.1 struct Student s1
	struct Student s1;//struct字眼可以省略

	//给s1属性赋值，通过.访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 99;
	cout << "姓名: " << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
	//2.2 struct Student s2 = {..}
	struct Student s2 = { "李四",20,88 };
	cout << "姓名: " << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;
	//2.3 在定义结构体时顺便创建结构体变量
	s3.name = "张三";
	s3.age = 18;
	s3.score = 99;
	cout << "姓名: " << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;
	s4.name = "赵6";
	cout << "s4.name=" << s4.name<<endl;
	system("pause");
	return 0;
}
