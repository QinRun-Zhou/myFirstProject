#include<iostream>
using namespace std;

int main53() {
	//do...while语句
	//在屏幕中输出0到9这10个数字
	int num = 0;
	int n2 = 0;
	do {
		cout << num << endl;
		num++;
	} while (num < 10);

	//do...while和while循环区别在于do...while会先执行一次循环语句
	while (n2<10) {
		cout << n2 << endl;
		n2++;
	}

	system("pauce");
	return 0;
}