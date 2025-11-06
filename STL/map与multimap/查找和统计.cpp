#include <map>
#include<iostream>

void printMap(std::map<int, int>& m)
{
	for (std::map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		std::cout << "key = " << it->first << " value = " << it->second << std::endl;
	}
	std::cout << std::endl;
}

//查找和统计(都是针对key值）
void test01()
{
	std::map<int, int>m;
	m.insert(std::pair<int, int>(1, 10));
	m.insert(std::pair<int, int>(2, 20));
	m.insert(std::pair<int, int>(3, 30));

	printMap(m);

	std::map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		std::cout << "找到了元素 \nkey = " << (*pos).first << " value = " << (*pos).second << std::endl;
	}
	else
	{
		std::cout << "未找到元素" << std::endl;
	}

	//统计
	int num = m.count(3);
	std::cout << "num = " << num << std::endl;
}



int main() 
{
	test01();
}

