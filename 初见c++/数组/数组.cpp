#include"ipch.h"
int main()
{
	int shuzu[10] = { 0 };//创建在栈上，跳出作用域时销毁
	int* weihouzhen = shuzu;
	for (int i = 0; i < 10; i++)
	{
		*weihouzhen = i;
		weihouzhen += 1;//因为这里是int类型指针，所以加1是会默认加一int的大小（4字节）
	}
	weihouzhen = shuzu;
	for (int i = 0; i < 10; i++)
	{
		std::cout << *weihouzhen << std::endl;
		weihouzhen += 1;
	}

	std::array<int, 5>shuzu2;//创建数组，更好用（会有边界检查，但是牺牲性能）

	int* another = new int[10];//创建在堆上，直到手动销毁或者程序结束
	//销毁时不能用delete another;(不会报错）
	//当你使用new[]分配一个数组时，必须使用delete[]来释放它。
	//同样，当你使用new分配一个单一对象时，必须使用delete来释放它
	//混合使用new和delete[]或者new[]和delete会导致未定义行为，通常是内存泄漏或者程序崩溃
	delete[] another;
}