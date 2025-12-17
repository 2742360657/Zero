#include<iostream>
#include<set>

void printSet(std::set<int>& s)
{
	for (const int &it:s)
	{
		std::cout << it << " ";
	}
	std::cout << std::endl;
}
void printMultiSet(std::multiset<int>& s)//可以包含相同的元素
{
	for (const int& it : s)
	{
		std::cout << it << " ";
	}
	std::cout << std::endl;
}

//构造和赋值
void test01()
{
	std::set<int> s1;

	s1.insert(50);
	s1.insert(30);
	s1.insert(20);
	s1.insert(90);
	s1.insert(90);//已经有90了，不会添加第二个90，但是multiset可以
	printSet(s1);

	//拷贝构造
	std::set<int>s2(s1);//set与multiset之间不能相互转换
	printSet(s2);

	//赋值
	std::set<int>s3;
	s3 = s2;
	printSet(s3);
}

int main() 
{
	test01();
}

