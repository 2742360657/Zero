#include <vector>
#include <string>
#include<iostream>

void test01() 
{
	std::vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i + 1);
	}
	//查找容器中是否有 5 这个元素
	std::vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		std::cout << "没有找到!" << std::endl;
	}
	else
	{
		std::cout << "找到:" << *it << std::endl;
	}
}

class Person {
public:
	Person(std::string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}


public:
	std::string m_Name;
	int m_Age;
};

void test02() 
{
	std::vector<Person> v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	std::vector<Person>::iterator it = find(v.begin(), v.end(), p2);//此处有比较，所以之前要重载==
	if (it == v.end())
	{
		std::cout << "没有找到!" << std::endl;
	}
	else
	{
		std::cout << "找到姓名:" << it->m_Name << " 年龄: " << it->m_Age << std::endl;
	}
}

int main() 
{
	test01();
	test02();
}

