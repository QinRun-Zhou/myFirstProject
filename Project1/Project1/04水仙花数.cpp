#include<iostream>
using namespace std;

int main54() {
	int num = 100;
	// 1.输出100 ~ 999
	// 2.输出个位、十位、百位
	// 3.所有位数3次方之和等于本身
	do {
		int a = 0;
		int b = 0;
		int c = 0;
		a = num % 10;	//获取个位
		b = num / 10 % 10;	//获取十位
		c = num / 100;	//获取百位
		if (a * a * a + b * b * b + c * c * c == num) {
			cout << num << endl;
		}

		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}