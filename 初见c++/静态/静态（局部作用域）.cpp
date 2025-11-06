#include<iostream>

void jia()
{
	static int i = 0;//此时为静态，第一次创建之后后面使用同一个内存，因此相当于对一个值进行操作（仅在此void有效）
	i++;
	std::cout << i << std::endl;
}
void jia2()
{
	int i = 0;//此时非静态，相当于多次创建一个int，因此全部输出1
	i++;
	std::cout << i << std::endl;
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		jia();
	}
	for (int i = 0; i < 5; i++)
	{
		jia2();
	}

}

