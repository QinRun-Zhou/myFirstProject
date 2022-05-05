#include<iostream>
using namespace std;

int main47() {
	//switch语句
	//给电影打分
	//10~9  经典
	//8~7   非常好
	//6~5   一般
	//5以下 烂片

	//1.提示用户给电影评分
	cout << "请给电影进行打分" << endl;
	//2.用户开始进行打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为： " << score << endl;
	//3.根据用户输入的分数来提示用户最后的结果

	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break;
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为电影非常好" << endl;
		break;
	case 7:
		cout << "您认为电影非常好" << endl;
		break;
	case 6:
		cout << "您认为电影很一般" << endl;
		break;
	case 5:
		cout << "您认为电影很一般" << endl;
		break;
	default:
		cout << "您认为这是烂片" << endl;
		break;
	}

	//if 和 switch区别？
	//switch 缺点，判断时候只能是整型和字符型
	//case里如果并没有break，那么程序会一直向下执行
	//对于多条件判断时，switch的结构清晰，执行效率高，缺点是switch不可以判断区间

	system("pause");
	return 0;
}