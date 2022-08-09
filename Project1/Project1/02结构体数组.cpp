#include<iostream>
using namespace std;
#include<string>

//结构体数组
//1.定义结构体
struct Student {
	//name
	string	name;
	//age
	int age;
	//score
	int score;
};


int main1002() {
	//2.创建结构体数组
	struct Student stuArray[]{
		{"zs",18,100},
		{"ls",28,99},
		{"ww",38,66}
	};

	//3.给结构体数组中的元素赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 80;
	stuArray[2].score = 60;
	
	//4.遍历结构体数组
	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << stuArray[i].name << "年龄：" << stuArray[i].age << "分数：" << stuArray[i].score << endl;
	}
	system("pause");
	return 0;
}