#include<iostream>
using namespace std;

int main96() {

	//指针和数组
	//利用指针访问数组中的元素

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "第一个元素为：" << arr[0] << endl;
	int* p = arr;  //数组名就是数组的首地址
	cout << "利用指针来访问数组第一个元素：" << *p << endl;
	//解引用解出来占用4个字节
	//p++往后便宜4个字节
	p++;	//让指针向后便宜四个字节
	cout << "利用指针来访问数组第二个元素：" << *p << endl;
	
	cout << "利用指针便利数组" << endl;
	int* p2 = arr;
	for (int i = 0; i < 10; i++) {
	//	cout << i << endl;
		cout << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}