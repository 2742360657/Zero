#include"ipch.h"

void m1(int message)//同一个exe的其他cpp可以用m1完成输出（不在class和struct内时，下同）
{
	std::cout << message;
}
static void m2(int message)//仅当前cpp可用
{
	std::cout << message;
}

int main()
{
	m1(6);
}