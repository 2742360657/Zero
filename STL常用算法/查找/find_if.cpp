#include<iostream>
#include<vector>

void test()
{
	std::vector<int> a;
	for (int i = 0; i < 10; i++)
	{
		a.push_back(i);
	}
	std::vector<int>::iterator a1 = std::find_if(a.begin(), a.end(), [&](int x) {return x > 5; });//尝试了一下lambda
	if (a1 == a.end())
	{
		std::cout << "找不到喵\n";
	}
	else
	{
		std::cout << "是" << *a1 << "的说\n";
	}
}

int main()
{
	test();
}

