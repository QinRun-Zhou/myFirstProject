//- ��װ������ʾ�ý��� �� void showMenu()
//- ��main�����е��÷�װ�õĺ���
#include<iostream>
#include<string>
using namespace std;
#define MAX 1000

//�˵�����
void showMenu() {
	cout << "*****************************" << endl;
	cout << "*****   1�������ϵ��   *****" << endl;
	cout << "*****   2����ʾ��ϵ��   *****" << endl;
	cout << "*****   3��ɾ����ϵ��   *****" << endl;
	cout << "*****   4��������ϵ��   *****" << endl;
	cout << "*****   5���޸���ϵ��   *****" << endl;
	cout << "*****   6�������ϵ��   *****" << endl;
	cout << "*****   0���˳�ͨѶ¼   *****" << endl;
	cout << "*****************************" << endl;
}


//��ϵ�˽ṹ��

struct Person {
	string m_Name;	//����
	int m_Sex;	//�Ա�1��	2Ů
	int m_Age;	//����
	string m_Phone;	//�绰
	string m_Addr;	//סַ
};

//ͨѶ¼�ṹ��
struct Addressbooks {
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

//1.�����ϵ��
void addPerson(Addressbooks* abs) {
	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼�������޷����!" << endl;
		return;
	}
	else {
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 --- boy" << endl;
		cout << "2 --- girl" << endl;
		int sex = 0;
		
		while (true) {
			//����������1����2�����˳�ѭ����ֵ��ȷ
			//����������������������
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "�����������������룡" << endl;
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//סַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;

		system("pause");	//�밴���������
		system("cls");	//����
	}
}

//2.��ʾ��ϵ��
void showPerson(struct Addressbooks* abs) {
	//�ж�ͨѶ¼�������Ƿ�Ϊ0,���Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_Size == 0) {
		cout << "��ǰ��¼Ϊ�ա�" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ?"��":"Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");	//�����������
	system("cls");		//����
}

//�����ϵ���Ƿ���ڣ����ڷ���λ�ã������ڷ���-1
//����һ��ͨѶ¼�����������Աȵ�����
int isExist(struct Addressbooks *abs,string name) {
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}

//3.ɾ��ָ����ϵ��
void deletePerson(struct Addressbooks* abs) {
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	
	//return == -1 δ�鵽
	//return != -1 �鵽��
	int ret = isExist(abs, name);
	if (ret != -1) {
		for (int i = ret; i < abs->m_Size; i++) {
			//����Ǩ��
			abs->personArray[i] = abs->personArray[i + 1];
			cout << "ɾ���ɹ�" << endl;
		}
		abs->m_Size--;	//����ͨѶ¼�е���Ա��
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//4.����ָ����ϵ����Ϣ
void findPerson(struct Addressbooks* abs ) {
	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs,name);
	if (ret != -1) {
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << "\t";
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//5.�޸�ָ����ϵ����Ϣ
void modifyPerson(struct Addressbooks* abs ) {
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs,name);
	if(ret != -1) {	//�ҵ���ϵ��
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//�Ա�
		while (true) {
			int sex = 0;
			cout << "�������Ա�" << endl;
			cout << "1 --- ��" << endl;
			cout << "2 --- Ů" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2) {
				//������ȷ �˳�ѭ��
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}//����
		int age;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//סַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
	}
	else {
		cout << "���޴���" << endl;
	}		
	//�����������
	system("pause");
	system("cls");
}

//6.���������ϵ��
void cleanPerson(struct Addressbooks* abs) {
	cout << "��ȷ��Ҫ�����ϵ�ˣ�����" << endl;
	cout << "������yes����no" << endl;
	string choice;
	cin >> choice;
	if (choice == "yes") {
		abs->m_Size = 0; //����ǰ��¼��ϵ��������Ϊ0�����߼���ղ���
		cout << "ͨѶ¼�Ѿ����" << endl;
	}
	else {
		cout << "��ѡ�����" << endl;
	}
	//�������������
	system("pause");
	system("cls");
}

int main1101() {

	//����ͨѶ¼�ṹ�����
	struct Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;


	int select;

	while (true) {
		//�˵�����
		showMenu();

		cin >> select;


		switch (select) {

		case 1:	//1.�����ϵ��
			addPerson(&abs);	//���õ�ַ���ݿ����޸�ʵ��
			break;
		case 2:	//2.��ʾ��ϵ��
			showPerson(&abs);
			system("cls");
			break;
		case 3: //{	//3.ɾ����ϵ��
		//	cout << "������һ��ɾ������ϵ��������" << endl;
		//	string name;
		//	cin >> name;
		//	if (isExist(&abs, name) == -1) {
		//		cout << "���޴���" << endl;
		//	}
		//	else {
		//		cout << "�ҵ�����" << endl;
		//	}
		//}
			deletePerson(&abs);
			break;
		case 4:	//4.������ϵ��
			findPerson(&abs);
			break;
		case 5:	//5.�޸���ϵ��
			modifyPerson(&abs);

			break;
		case 6:	//6.�����ϵ��
			cleanPerson(&abs);
			break;
		case 0:	//0.�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
}