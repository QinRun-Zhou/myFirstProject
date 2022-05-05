#include<iostream>	
using namespace std;

int main56() {
	
	// 1.先输出1到100这些数字

	// 2.从这100个数字找到特殊字数，改为"敲桌子";

	// 3.特殊数字 7的倍数、个位有7、十位有7
	// (7 14 21 28 ...) % 7 = 0; (7 17 27 37 ...) % 10 =7; (70 71 72 73 ...) / 10 = 7
	for (int i = 1; i <= 100; i++) {
		int a = 0;
		int b = 0;
		int c = 0;
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			cout << "敲桌子" << endl;
		}
		else {
			cout << i << endl;
		}
	}


	system("pause");
	return 0;
}