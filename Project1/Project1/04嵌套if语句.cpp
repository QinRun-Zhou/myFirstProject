#include<iostream>
using namespace std;

int main44() {
	/*
	- 提示用户输入高考分数，根据分数做如下判断
	- 分数若干大于600分视为考上一本大学，大于500考上二本大学，大于400考上三本，其余视为未考上本科
	- 在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大
	*/
	//1.提示输入高考分数
	int score = 0;
	cout << "请输入一个考试分数：" << endl;
	cin >> score;
	//2.显示高考分数
	cout << "您输入的考试分数为：" << score << endl;
	//3.判断
	if (score > 600) {
		if (score > 700) {
			cout << "恭喜考上北大" << endl;
		}
		else if (score > 650) {
			cout << "恭喜考上清华" << endl;
		}
		else {
			cout << "恭喜考上人民大学" << endl;
		}		
	}
	else if (score > 500) {
		cout << "恭喜考上二本大学" << endl;
	}
	else if (score > 400) {
		cout << "恭喜考上三本大学" << endl;
	}
	else {
		cout << "未考上大学，再接再厉" << endl;
	}
	system("pause");
	return 0;
}
