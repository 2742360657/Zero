#include<iostream>
#include<vector>
#include<algorithm>

void test01()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(4);
	v.push_back(3);

	std::vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end()) 
	{
		std::cout << "找不到!" << std::endl;
	}
	else {
		std::cout << "找到相邻重复元素为:" << *it << std::endl;
	}
}

int main()
{
	test01();
}

