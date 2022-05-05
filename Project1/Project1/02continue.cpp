#include<iostream>
using namespace std;

int main62() {
	int j = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 1) {
			cout << i << endl;
			j++;
		}
	}
	cout << j << endl;

	system("pause");
	return 0;
}