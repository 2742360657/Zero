#include<iostream>
#include<list>

template<typename T>
void test01(std::list<T> a, int b, T c)
{
	a.assign(b, c);
	a.push_back(0);
	std::cout << a.front() << "\n";
	std::cout << a.back() << "\n";
}

int main()
{
	std::list<int> a;
	test01(a, 3, 5);
}