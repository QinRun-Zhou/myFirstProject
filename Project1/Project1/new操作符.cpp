#include<iostream>
using namespace std;



//1.new�Ļ����﷨
int* func3() {
	//�ڶ���������������
	//new�����Ǹ��������͵�ָ��
	int* p = new int(10);
	return p;
}

void Test01() {
	int* p = func3();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//�����������ɳ���Ա�����٣�����Ա�����ͷ�
	//������ͷŶ��������ݣ����ùؼ���delete

	delete p;
	//cout << *p << endl;	//�ڴ��Ѿ����ͷ��ٴη��ʾ��ǷǷ�����
}

void Test02() {
	//����10�������ݵ����飬�ڶ���
	int * arr = new int[10]; //10����������10��Ԫ��
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100; //��10��Ԫ�ظ�ֵ100~109
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