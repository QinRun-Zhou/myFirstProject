#include<iostream>
#include<string>
using namespace std;

//1.设计英雄结构体
struct Hero {
	//姓名
	string name;
	//age
	int age;
	//sex
	string sex;
};

//冒泡排序 实现年龄升序排列
void bubbleSort(struct Hero heroArray[],int lenght){
	for (int i = 0; i < lenght-1; i++) {
		for (int j = 0; j < lenght - i - 1; j++) {
			int temp = heroArray[j].age;
			if (heroArray[j].age > heroArray[j + 1].age) {
				heroArray[j].age = heroArray[j + 1].age;
				heroArray[j + 1].age = temp;
			}
		}
	}
}

//创建打印排序后数组中的信息
void printHero(struct Hero heroArray[], int lenght) {
	for (int i = 0; i < lenght; i++) {
		cout << "Name: " << heroArray[i].name << " Age: " << heroArray[i].age << " Sex: " << heroArray[i].sex << endl;
	};
}

int main1008() {



	//2.创建数组存放5名英雄
	struct Hero heroArray[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};

	int lenght = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < lenght; i++) {
		cout << "Name: " << heroArray[i].name << " Age: " << heroArray[i].age << " Sex: " << heroArray[i].sex << endl;
	};
	cout << endl;
	//3.对数组进行排序，按照年龄进行升序排序
	bubbleSort(heroArray, lenght);

	//4.打印排序后的结果
	printHero(heroArray, lenght);

	system("pause");
	return 0;
}