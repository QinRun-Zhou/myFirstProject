#include<iostream>
using namespace std;

int main72() {
	long long arr[5] = { 1,2,3,4,5 };
	//获取数组所占用内存空间大小
	cout << sizeof(arr) << endl;
	//获取数组内元素个数
	cout << sizeof(arr) / sizeof(arr[0]) << endl;
	//获取数组首地址，&把arr[0]看成整体
	cout << arr << endl;
	cout << (int)arr << endl;
	cout << (int)&arr[0] << endl;
	cout << (int)&arr[1] << endl;	//每个元素相差8个内存空间

	//数组名是常量，不可以进行赋值操作
	system("pause");
	return 0;
}