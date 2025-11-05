#include"ipch.h"
int main()
{
	std::tuple<int, float,int> ss = { 2,2.1f,3 };//可以储存多个不同类型变量
	int a = std::get<0>(ss);//读取值时用这种形式
	float b = std::get<1>(ss);
	std::cout << std::get<0>(ss) << " and " << b << std::endl;
}