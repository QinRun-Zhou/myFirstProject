#include<iostream>
using namespace std;

int main25() {
/*
\a ����	007
\b �˸�BS),����ǰλ���Ƶ�ǰһ�� 008
\f ��ҳ��FF),����ǰλ���Ƶ���ҳ��ͷ 012
\n ���У�IF),����ǰλ���Ƶ���һ�п�ͷ 010
\r �س�	��CR��������ǰλ���Ƶ����п�ͷ 013
\t ˮƽ�Ʊ�HT),������һ��TABλ�� 009
\v ��ֱ�Ʊ�VT�� 001
\\ ����һ����б���ַ�"\" 092
\' ����һ�������ţ�Ʋ�ţ��ַ� 039
\" ����һ��˫�����ַ� 034
\? ����һ���ʺ� 063
\0 ��������0 000
*/

	cout << "Hello World\n\\" << endl;
	cout << "Hello World\taaaa" << endl;
	cout << "aaaaa\tHello World\taaaa" << endl;
	cout << "aaaa\tHello World\taaaa" << endl;
	cout << "aaaaaaa\tHello World\taaaa" << endl;
	system("pause");
	return 0;
}