#include<iostream>
using namespace std;

int main73() {
	// 1.����5ֻС�����ص�����
	int arr[5] = { 300,350,200,400,250 };
	int max = 0;

	for (int i = 0; i < 5; i++) {
		//��������е�Ԫ�ر����϶������ֵ���󣬸������ֵ
		if (arr[i] > max) {
			max = arr[i];
		}
		cout << max << endl;
	}

	system("pause");
	return 0;
}