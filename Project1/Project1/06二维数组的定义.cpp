#include<iostream>
using namespace std;

int main76() {
	//二维数组定义方式
	/*
		1.数据类型 数组名[ 行数 ][ 列数 ];
		2.数据类型 数组名[ 行数 ][ 列数 ] = { {v1,v2},{v3,v4} };
		3.数据类型 数组名[ 行数 ][ 列数 ] = { v1,v2,v3,v4};
		4.数据类型 数组名[  ][ 列数 ] = { v1,v2,v3,v4 };
	
	*/
	//1.数据类型 数组名[行数][列数];
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << endl;
		}
	}
	//2.数据类型 数组名[行数][列数] = { {v1,v2},{v3,v4} };
	int arr2[2][3] = { {1,2,3},{4,5,6} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr2[i][j] << endl;
		}
	}
	//3.数据类型 数组名[ 行数 ][ 列数 ] = { v1,v2,v3,v4};
	int arr3[2][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr3[i][j] << endl;
		}
	}
	//4.数据类型 数组名[][列数] = { v1,v2,v3,v4 };
	int arr4[][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr4[i][j] << endl;
		}
	}
	cout << (int)arr3 << endl;
	cout << "二维数组占用内粗：" << sizeof(arr) << endl;
	system("pause");
	return 0;
}