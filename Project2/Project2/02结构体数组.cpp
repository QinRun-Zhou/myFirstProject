#include<iostream>
using namespace std;
#include<string>
struct stu {
	string name;
	int age;
	int score;
};

int main11() {
	struct stu stuArray[3]{
		{"zs",20,10},
		{"ww",22,100},
		{"ls",23,99}

	};
		for (i = 0, i < 3, i++) {
			cout << "������" << stuArray[i].name << "���䣺"stuArray[i].age << "������" << stuArray[i]).socre << endl;
		};
	system("pasue");
	return 0;
}