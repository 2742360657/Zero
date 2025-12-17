#include<iostream>
#include<set>

void test01()
{
	std::multiset<int> s1;
	//插入
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	//查找
	std::set<int>::iterator pos = s1.find(30);

	if (pos != s1.end())
	{
		std::cout << "找到了元素 ： " << *pos << std::endl;
	}
	else
	{
		std::cout << "未找到元素" << std::endl;
	}

	//统计
	int num = s1.count(1314);
	std::cout << "num = " << num << std::endl;
	num = s1.count(30);
	std::cout << "num = " << num << std::endl;
	s1.insert(30);
	s1.insert(30);
	s1.insert(30);
	num = s1.count(30);
	std::cout << "num = " << num << std::endl;
}

int main() 
{
	test01();
}

