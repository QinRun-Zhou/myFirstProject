#include<iostream>
using namespace std;

int main76() {
	//��ά���鶨�巽ʽ
	/*
		1.�������� ������[ ���� ][ ���� ];
		2.�������� ������[ ���� ][ ���� ] = { {v1,v2},{v3,v4} };
		3.�������� ������[ ���� ][ ���� ] = { v1,v2,v3,v4};
		4.�������� ������[  ][ ���� ] = { v1,v2,v3,v4 };
	
	*/
	//1.�������� ������[����][����];
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
	//2.�������� ������[����][����] = { {v1,v2},{v3,v4} };
	int arr2[2][3] = { {1,2,3},{4,5,6} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr2[i][j] << endl;
		}
	}
	//3.�������� ������[ ���� ][ ���� ] = { v1,v2,v3,v4};
	int arr3[2][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr3[i][j] << endl;
		}
	}
	//4.�������� ������[][����] = { v1,v2,v3,v4 };
	int arr4[][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr4[i][j] << endl;
		}
	}
	cout << (int)arr3 << endl;
	cout << "��ά����ռ���ڴ֣�" << sizeof(arr) << endl;
	system("pause");
	return 0;
}