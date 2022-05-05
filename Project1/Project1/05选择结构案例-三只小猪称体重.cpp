#include<iostream>
using namespace std;

int main45() {
	//1.创建三只小猪体重
	int a = 0;
	int b = 0;
	int c = 0;
	//2.用户输入三只小猪体重
	cout << "请输入小猪a的体重：" << endl;
	cin >> a;
	cout << "请输入小猪b的体重：" << endl;
	cin >> b;
	cout << "请输入小猪c的体重：" << endl;
	cin >> c;
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	//3.判断
	if (a > b)
	{
		if (a > c) 
		{
			cout << "a是最重的" << endl;
		}
		else 
		{
			cout << "c是最重的" << endl;
		}
	}
	else
	{
		if (b > c) 
		{
			cout << "b是最重的" << endl;
		}
		else 
		{
			cout << "c是最重的" << endl;
		}
	}
	
	system("pause");
	return 0;
}
