#include<iostream>

int main()
{
	std::list<int> a;
	if (a.empty() == 1)
	{
		std::cout << "空的喵\n";
	}
	a.push_back(9);
	a.push_front(1);
	std::cout << a.size()<<"\n";
	a.resize(0);
	std::cout << a.size() << "\n";
	a.resize(3, 0);
	std::cout << a.size() << "\n";
}

