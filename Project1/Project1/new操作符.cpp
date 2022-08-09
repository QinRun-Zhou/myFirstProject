#include<iostream>
using namespace std;



//1.new的基本语法
int* func3() {
	//在堆区创建整形数据
	//new返回是该数据类型的指针
	int* p = new int(10);
	return p;
}

void Test01() {
	int* p = func3();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据由程序员管理开辟，程序员管理释放
	//如果想释放堆区的数据，利用关键字delete

	delete p;
	//cout << *p << endl;	//内存已经被释放再次访问就是非法操作
}

void Test02() {
	//创建10整形数据的数组，在堆区
	int * arr = new int[10]; //10代表数组有10个元素
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100; //给10个元素赋值100~109
	}
	for (int i = 0; i < 10; i++){
		cout << arr[i] << endl;
	}
	delete[] arr;
	// cout << arr[0] << endl;
}

int main1204() {
	Test01();
	Test02();
	system("pause");
	return 0;
}