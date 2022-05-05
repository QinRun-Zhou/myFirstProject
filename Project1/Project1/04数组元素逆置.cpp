#include<iostream>
using namespace std;

int main74() {
	//实现数组元素逆置
	//1.创建数组
	int arr[5] = { 3,4,2,5,1 };
	int start = 0;	//起始下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1;	//结束下标
	cout << "逆置前：" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
	while (start < end) {
		// 元素互换
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		// 下标更新
		start++;
		end--;
	}
	cout << "逆置后：" << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}