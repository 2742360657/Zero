#include<iostream>
#include<vector>
#include<algorithm>

class Greater
{
public:
	bool operator()(int val)
	{
		return val >= 4;
	}
};

//内置数据类型
void test01()
{
	std::vector<int> v = {1,2,4,5,3,4,4,21,33};

	int num = std::count_if(v.begin(), v.end(), Greater());

	std::cout << "大于4的个数为： " << num << std::endl;
}

//自定义数据类型
class Person
{
public:
	Person(std::string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	std::string m_Name;
	int m_Age;
};

class AgeLess35
{
public:
	bool operator()(const Person& p)
	{
		return p.m_Age < 35;
	}
};
void test02()
{
	std::vector<Person> v;

	Person p1("刘备", 35);
	Person p2("关羽", 35);
	Person p3("张飞", 35);
	Person p4("赵云", 30);
	Person p5("曹操", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int num = count_if(v.begin(), v.end(), AgeLess35());
	std::cout << "小于35岁的个数：" << num << std::endl;
}


int main() 
{
	test01();
	test02();
}