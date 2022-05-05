#include<iostream>
using namespace std;

int main25() {
/*
\a 警报	007
\b 退格（BS),降当前位置移到前一列 008
\f 换页（FF),将当前位置移到下页开头 012
\n 换行（IF),将当前位置移到下一行开头 010
\r 回车	（CR），将当前位置移到本行开头 013
\t 水平制表（HT),跳到下一个TAB位置 009
\v 垂直制表（VT） 001
\\ 代表一个反斜线字符"\" 092
\' 代表一个单引号（撇号）字符 039
\" 代表一个双引号字符 034
\? 代表一个问号 063
\0 代表数字0 000
*/

	cout << "Hello World\n\\" << endl;
	cout << "Hello World\taaaa" << endl;
	cout << "aaaaa\tHello World\taaaa" << endl;
	cout << "aaaa\tHello World\taaaa" << endl;
	cout << "aaaaaaa\tHello World\taaaa" << endl;
	system("pause");
	return 0;
}