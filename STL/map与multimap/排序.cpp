#include <map>
#include<iostream>

class MyCompare 
{
public:
	bool operator()(int v1, int v2)const //排序方法记得const
	{
		return v1 > v2;
	}
};

void test01()
{
	//默认从小到大排序
	//利用仿函数实现从大到小排序
	std::map<int, int, MyCompare> m;

	m.insert(std::make_pair(1, 10));
	m.insert(std::make_pair(2, 20));
	m.insert(std::make_pair(3, 30));
	m.insert(std::make_pair(4, 40));
	m.insert(std::make_pair(5, 50));

	for (std::map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++) 
	{
		std::cout << "key:" << it->first << " value:" << it->second << std::endl;
	}
}
int main() 
{
	test01();
}