#include<vector>
#include<algorithm>
#include<iostream>

class TransForm
{
public:
	int operator()(int val)
	{
		return val;
	}

};

class MyPrint
{
public:
	void operator()(int val)
	{
		std::cout << val << " ";
	}
};

void test01()
{
	std::vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	std::vector<int>vTarget; //目标容器
	vTarget.resize(v.size()); // 目标容器需要提前开辟空间

	transform(v.begin(), v.end(), vTarget.begin(), TransForm());
	for_each(vTarget.begin(), vTarget.end(), MyPrint());
}

int main() 
{
	test01();
}

