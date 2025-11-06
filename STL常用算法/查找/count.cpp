#include<iostream>
#include<set>

//如果有比较的话要定义==

void test()
{
	std::multiset<int> a;
	a.insert(1);
	a.insert(4);
	a.insert(3); 
	a.insert(3);
	a.insert(5);
	a.insert(2);
	a.insert(0);
	a.insert(1);
	a.insert(3);
	a.insert(1);
	a.insert(4);
	int shu=std::count(a.begin(), a.end(), 1);
	std::cout << shu;
}

int main()
{
	test();
}

