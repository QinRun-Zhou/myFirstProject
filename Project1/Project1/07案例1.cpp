#include<iostream>
#include<string>
using namespace std;
//����ѧ���ṹ��
struct Student {
	string sName;
	int score;
};

//������ʦ�ṹ��
struct Teacher {
	string tName;
	struct Student sArray[5];
};

//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher tArray[], int lenght) {
	string nameSeed = "ABCDE";
	//����ʦ��ֵ
	for (int i = 0; i < lenght; i++) {
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName = nameSeed[j];
			
			tArray[i].sArray[j].score = 60;
		}
		
	}
}

//��ӡ������Ϣ
void printInfo(struct Teacher tArray[], int lenght) {

	for (int i = 0; i < lenght; i++) {
		cout << "��ʦ������" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++) {
			cout << "\tѧ��������" << tArray[i].sArray[j].sName << " ���Է�����" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main1007() {


	//1������3����ʦ����
	struct Teacher tArray[3];

	//2��ͨ��������3����ʦ��Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int lenght = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, lenght);

	//3����ӡ������ʦ������ѧ������Ϣ
	printInfo(tArray,lenght);

	system("pause");
	return 0;
}