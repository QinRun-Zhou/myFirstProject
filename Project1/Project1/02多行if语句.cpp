#include<iostream>
using namespace std;

int main42() {
	//选择结构 - 多行if语句
	//输入考上分数，如果分数大于600，视为考上一本大学，在屏幕输出
	//如果没考上一本大学，大于考上一本大学
	
	//1.输入考试分数
	int score = 0;
	cout << "请输入一个考试分数：" << endl;
	cin >> score;
	//2.提示用户输入的分数
	cout << "您输入的分数为：" << score << endl;
	
	//3.判断如果大于600，打印考上一本，否则打印为考上一本
	if (score > 600)
	{
		cout << "恭喜考上一本" << endl;
	}
	else
	{
		cout << "未考上一本大学" << endl;
	}
	system("pause");
	return 0;
}