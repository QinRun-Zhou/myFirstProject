#include<iostream>
#include<string>
using namespace std;

//1.���Ӣ�۽ṹ��
struct Hero {
	//����
	string name;
	//age
	int age;
	//sex
	string sex;
};

//ð������ ʵ��������������
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

//������ӡ����������е���Ϣ
void printHero(struct Hero heroArray[], int lenght) {
	for (int i = 0; i < lenght; i++) {
		cout << "Name: " << heroArray[i].name << " Age: " << heroArray[i].age << " Sex: " << heroArray[i].sex << endl;
	};
}

int main1008() {



	//2.����������5��Ӣ��
	struct Hero heroArray[5] = {
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};

	int lenght = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < lenght; i++) {
		cout << "Name: " << heroArray[i].name << " Age: " << heroArray[i].age << " Sex: " << heroArray[i].sex << endl;
	};
	cout << endl;
	//3.������������򣬰������������������
	bubbleSort(heroArray, lenght);

	//4.��ӡ�����Ľ��
	printHero(heroArray, lenght);

	system("pause");
	return 0;
}