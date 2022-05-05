#include<iostream>
using namespace std;

int main61() {
	//break的使用时机
	
	//1. 出现在switch语句中
	cout << "1. 普通" << endl;
	cout << "2. 困难" << endl;
	cout << "3. 地狱" << endl;
	int select = 0;
	cin >> select;
	switch (select) {
	case 1:
		cout << "您选择的是普通难度" << endl;
		break;
	case 2:
		cout << "您选择的是困难难度" << endl;
		break;
	case 3:
		cout << "您选择的是地狱难度" << endl;
		break;
	}

	//2. 出现在循环语句中
	for (int i = 0; i < 10; i++)
	{
		if (i == 5) {
			break;
		}
		cout << i << endl;
	}

	//3. 出现在嵌套循环语句中
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;
			}
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}