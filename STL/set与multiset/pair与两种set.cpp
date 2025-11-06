#include <set>
#include<iostream>

//set和multiset区别
void test01()
{
	std::set<int> s;
	std::pair<std::set<int>::iterator, bool>  ret = s.insert(10);//set的insert操作会返回一个pair
	//对于pair，有两个元素，创建方式如下
	//std::pair<std::string, int> p("Tom", 20);
	//std::pair<std::string, int> p2 = std::make_pair("Jerry", 10);
	if (ret.second) //访问pair元素时使用first与second
	{
		std::cout << "第一次插入成功!" << std::endl;
	}
	else 
	{
		std::cout << "第一次插入失败!" << std::endl;
	}
	ret = s.insert(10);
	if (ret.second) 
	{
		std::cout << "第二次插入成功!" << std::endl;
	}
	else 
	{
		std::cout << "第二次插入失败!" << std::endl;
	}

	//multiset
	std::multiset<int> ms;
	ms.insert(10);
	ms.insert(10);
	for (int it:ms) 
	{
		std::cout << it << " ";
	}
	std::cout << std::endl;
}

int main() 
{
	test01();
}

