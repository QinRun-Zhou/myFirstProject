#include<iostream>
using namespace std;

int main71() {
	//数组三种定义方法
	/*
		1. 数据类型 数组名[ 数组长度 ];
		2. 数据类型 数组名[ 数组长度 } = { value1 ,value2 ,value3 ,... };
		3. 数据类型 数组名[] = { value1 ,value2 ,value3 ,...};
	*/

	// 1.数据类型 数组名[ 数组长度 ]
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
		// 访问数据元素
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
	// 2.数据类型 数组名[ 数组长度 ] = { value1 ,value2 ,value3 ,... };
	int arr1[5] = { 10,20,30 };	//如果在初始化数据没有全部填写，会用0来填补数据
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << endl;
	}
	// 3.数据类型 数组名[] = { value ,value2 ,value3 ,...};
	int arr2[] = { 90,80,70,60,50,40,30,20,10 };
	for (int i = 0; i < 10; i++) {
		cout << arr2[i] << endl;
	}
	cout << arr2[8] << endl;
	system("pause");

	return 0;
}