#include<iostream>
using namespace std;

int main73() {
	// 1.创建5只小猪体重的数组
	int arr[5] = { 300,350,200,400,250 };
	int max = 0;

	for (int i = 0; i < 5; i++) {
		//如果数组中的元素比我认定的最大值还大，更新最大值
		if (arr[i] > max) {
			max = arr[i];
		}
		cout << max << endl;
	}

	system("pause");
	return 0;
}