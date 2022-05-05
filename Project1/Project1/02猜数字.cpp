#include<iostream>	
using namespace std;

int main52() {
	//添加随机数种子 作用用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));
	//1.系统生成随机数
	int num = rand() % 100 + 1;
	cout << num << endl;
	//2.玩家进行猜测
	int val = 0;  //玩家输入的数据
	while (true) {
		cin >> val;
		//3.判断玩家猜测
		if (val > num) {
			cout << "猜测过大" << endl;
		}
		else if (val < num) {
			cout << "猜测过小" << endl;
		}
		else {
			cout << "猜对了" << endl;
			break;
		}
		//猜对  退出游戏

		//猜错  提示猜的结果 过大或过小  重新循环
	}
	system("pause");
	return 0;
}