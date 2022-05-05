#include<iostream>	
using namespace std;

//二维数组案例-考试成绩统计

int main78() {
	// 1.创建数组：3行3列
	int score[3][3] = {
		{100,100,100},
		{30,90,98},
		{60,70,20}
	};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << score[i][j] << " ";
		}
		cout << endl;
	}
	// 2.统计每个人的总和分数
	string name[3] = { "张三","李四","王五" };
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += score[i][j];
			cout << score[i][j] << " ";
		}
		cout << name[i] << "个人的总分为" << sum << endl;
	}

	// 2.统计考试成绩，让每行的3列相加
	system("pause");
	return 0;
}