#include<iostream>
#include<set>

void printSet(std::multiset<int>& s)
{
	for (std::set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void test()
{
	std::multiset<int> a;
	if (a.empty())
	{
		std::cout << "无\n";
	}
	a.insert(55);
	a.insert(55);
	a.insert(55);
	printSet(a);
	std::cout << a.size() << "\n";
	std::cout << a.max_size() << "\n";
	a.insert(55);
	a.insert(55);
	a.insert(55);
	a.insert(55);
	a.insert(55);
	printSet(a);
	std::cout << a.size() << "\n";
	std::cout << a.max_size() << "\n";
	std::multiset<int>b;
	printSet(b);
	std::cout << b.size() << "\n";
	std::cout << b.max_size() << "\n";
	a.swap(b); //交换时只能是同类型;
	printSet(a);
	printSet(b);
	std::cout << a.size() << "\n";
	std::cout << a.max_size() << "\n";
	std::cout << b.size() << "\n";
	std::cout << b.max_size() << "\n";
}

int main()
{
	test();
}

