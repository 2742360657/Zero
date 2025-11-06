#include<iostream>
using namespace std;

void qianjia1(int* bu)
{
	++ (*bu);//此处是改变a指针指向的值
	//void中的参数 a 是 main 函数中变量 a 的一个副本，在函数内部对 a 只改变副本的值，而不会影响 main 函数中的原始 a，所以此处使用指针
}
void qianjia2(int& bu)//对bu进行引用而非新建一个变量
{
	++(bu);//由于是引用，所以可以直接改变a的值
	//void中的参数 a 是 main 函数中变量 a 的一个副本，在函数内部对 a 只改变副本的值，而不会影响 main 函数中的原始 a，所以此处使用指针
}

int main()
{
	int a = 12;
	for (int i = 0; i < 5; i = ++i)
	{
		qianjia1(&a);//对象是指针，所以用&a取址
		qianjia2(a);//引用a的值，不用取址
		int b = a + 2;
		cout << a << endl;
		cout << b << endl;
	}
}


