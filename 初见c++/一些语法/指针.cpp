#include"ipch.h"
using namespace std;

int main()
{
	int  var = 18;
	int* a = &var;//取地址操作符 &：用于获取变量的内存地址。例如，如果 var 是一个变量，那么 &var 将给出 var 的内存地址
	cout << a << endl;
	int b = *a;	//解引用操作符* ：用于访问指针指向的值。例如，如果 ptr 是一个指向 var 的指针，那么* ptr 将给出 var 的值
	cout << a << endl;
	cout << b << endl;
	cout << var << endl;

}