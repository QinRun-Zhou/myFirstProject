#include<iostream>
#include<string>
using namespace std;
//定义学生结构体
struct Student {
	string sName;
	int score;
};

//定义老师结构体
struct Teacher {
	string tName;
	struct Student sArray[5];
};

//给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[], int lenght) {
	string nameSeed = "ABCDE";
	//给老师赋值
	for (int i = 0; i < lenght; i++) {
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//通过循环给每名老师所带的学生赋值
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName = nameSeed[j];
			
			tArray[i].sArray[j].score = 60;
		}
		
	}
}

//打印所有信息
void printInfo(struct Teacher tArray[], int lenght) {

	for (int i = 0; i < lenght; i++) {
		cout << "老师姓名：" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++) {
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName << " 考试分数：" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main1007() {


	//1、创建3名老师数组
	struct Teacher tArray[3];

	//2、通过函数给3名老师信息赋值，并给老师带的学生信息赋值
	int lenght = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, lenght);

	//3、打印所有老师和所带学生的信息
	printInfo(tArray,lenght);

	system("pause");
	return 0;
}