#include"ipch.h"

//at(int idx);     //返回索引idx所指的数据
//operator[];      //返回索引idx所指的数据
//front();         //返回容器中第一个数据元素
//back();          //返回容器中最后一个数据元素

int main()
{
	std::vector < std::string > a = { "苏茜" };
	a.push_back("天下第一可爱");
	a.push_back("尾巴");
	a.push_back("毛茸茸的");
	//喜欢喜欢喜欢
	std::cout << a.front() << a[1] << a.at(2) << a.back();
}