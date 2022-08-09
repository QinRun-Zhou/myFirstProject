//- 封装函数显示该界面 如 void showMenu()
//- 在main函数中调用封装好的函数
#include<iostream>
#include<string>
using namespace std;
#define MAX 1000

//菜单界面
void showMenu() {
	cout << "*****************************" << endl;
	cout << "*****   1、添加联系人   *****" << endl;
	cout << "*****   2、显示联系人   *****" << endl;
	cout << "*****   3、删除联系人   *****" << endl;
	cout << "*****   4、查找联系人   *****" << endl;
	cout << "*****   5、修改联系人   *****" << endl;
	cout << "*****   6、清空联系人   *****" << endl;
	cout << "*****   0、退出通讯录   *****" << endl;
	cout << "*****************************" << endl;
}


//联系人结构体

struct Person {
	string m_Name;	//姓名
	int m_Sex;	//性别：1男	2女
	int m_Age;	//年龄
	string m_Phone;	//电话
	string m_Addr;	//住址
};

//通讯录结构体
struct Addressbooks {
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	//通讯录中当前记录联系人个数
	int m_Size;
};

//1.添加联系人
void addPerson(Addressbooks* abs) {
	if (abs->m_Size == MAX) {
		cout << "通讯录已满，无法添加!" << endl;
		return;
	}
	else {
		//添加具体联系人

		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		cout << "请输入性别：" << endl;
		cout << "1 --- boy" << endl;
		cout << "2 --- girl" << endl;
		int sex = 0;
		
		while (true) {
			//如果输入的是1或者2可以退出循环，值正确
			//如果输入的有误，请重新输入
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//电话
		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;

		system("pause");	//请按任意键继续
		system("cls");	//清屏
	}
}

//2.显示联系人
void showPerson(struct Addressbooks* abs) {
	//判断通讯录中人数是否为0,如果为0，提示记录为空
	//如果不为0，显示记录的联系人信息
	if (abs->m_Size == 0) {
		cout << "当前记录为空。" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ?"男":"女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");	//按任意键继续
	system("cls");		//清屏
}

//检测联系人是否存在，存在返回位置，不存在返回-1
//参数一：通讯录；参数二：对比的名字
int isExist(struct Addressbooks *abs,string name) {
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}

//3.删除指定联系人
void deletePerson(struct Addressbooks* abs) {
	cout << "请输入你要删除的联系人" << endl;
	string name;
	cin >> name;
	
	//return == -1 未查到
	//return != -1 查到了
	int ret = isExist(abs, name);
	if (ret != -1) {
		for (int i = ret; i < abs->m_Size; i++) {
			//数据迁移
			abs->personArray[i] = abs->personArray[i + 1];
			cout << "删除成功" << endl;
		}
		abs->m_Size--;	//更新通讯录中的人员数
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//4.查找指定联系人信息
void findPerson(struct Addressbooks* abs ) {
	cout << "请输入你要查找的联系人：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs,name);
	if (ret != -1) {
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->personArray[ret].m_Addr << "\t";
	}
	else {
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//5.修改指定联系人信息
void modifyPerson(struct Addressbooks* abs ) {
	cout << "请输入您要修改的联系人：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs,name);
	if(ret != -1) {	//找到联系人
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//性别
		while (true) {
			int sex = 0;
			cout << "请输入性别：" << endl;
			cout << "1 --- 男" << endl;
			cout << "2 --- 女" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2) {
				//输入正确 退出循环
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}//年龄
		int age;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//电话
		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
	}
	else {
		cout << "查无此人" << endl;
	}		
	//按任意键清屏
	system("pause");
	system("cls");
}

//6.清空所有联系人
void cleanPerson(struct Addressbooks* abs) {
	cout << "你确定要清空联系人！！！" << endl;
	cout << "请输入yes或者no" << endl;
	string choice;
	cin >> choice;
	if (choice == "yes") {
		abs->m_Size = 0; //将当前记录联系人数量置为0，做逻辑清空操作
		cout << "通讯录已经清空" << endl;
	}
	else {
		cout << "您选择不清空" << endl;
	}
	//按任意键后清屏
	system("pause");
	system("cls");
}

int main1101() {

	//创建通讯录结构体变量
	struct Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;


	int select;

	while (true) {
		//菜单调用
		showMenu();

		cin >> select;


		switch (select) {

		case 1:	//1.添加联系人
			addPerson(&abs);	//利用地址传递可以修改实参
			break;
		case 2:	//2.显示联系人
			showPerson(&abs);
			system("cls");
			break;
		case 3: //{	//3.删除联系人
		//	cout << "请输入一个删除的联系人姓名：" << endl;
		//	string name;
		//	cin >> name;
		//	if (isExist(&abs, name) == -1) {
		//		cout << "查无此人" << endl;
		//	}
		//	else {
		//		cout << "找到此人" << endl;
		//	}
		//}
			deletePerson(&abs);
			break;
		case 4:	//4.查找联系人
			findPerson(&abs);
			break;
		case 5:	//5.修改联系人
			modifyPerson(&abs);

			break;
		case 6:	//6.清空联系人
			cleanPerson(&abs);
			break;
		case 0:	//0.退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
}