#include<iostream>
using namespace std;

int main75() {
	int arr[9] = { 9,8,7,6,5,4,3,2,1 };
	cout << "ÅÅĞòÇ°£º" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i];
	}
	cout << endl;
	//¿ªÊ¼Ã°ÅİÅÅĞò
	for (int i = 0; i < 9 - 1; i++) {
		for (int j = 0; j < 9 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "ÅÅĞòºó£º" << endl;
	for (int i = 1; i < 9; i++) {
		cout << arr[i];
	}
	system("pause");
	return 0;
}