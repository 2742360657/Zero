#include <set>
#include<iostream>

struct player
{
	friend class MyCompare02;

public:
	player(int a, std::string b)
		:m_lv(a), m_name(b) {}
	void showplayer()
	{
		std::cout << "name:" << m_name << " " << "lv:" << m_lv << "\n";
	}                                                                 

private:                                                              
	std::string m_name;                   
	int m_lv;                 
};

class MyCompare01
{
public:
	bool operator()(int v1, int v2)const//这里比较函数必须是const函数
	{
		return v1 > v2;
	}
};

class MyCompare02
{
public:
	bool operator()(const player& a,const player& b)const
	{
		return (a.m_lv > b.m_lv) || (a.m_lv == b.m_lv && a.m_name < b.m_name);
		//如果写成return a.m_lv > b.m_lv;会导致同一星级只出现一个干员
	}
};

void test01()
{
	std::set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(50);

	//默认从小到大
	for (std::set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	//指定排序规则
	std::set<int, MyCompare01> s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(20);
	s2.insert(30);
	s2.insert(50);

	for (std::set<int, MyCompare01>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void test02()
{
	std::set<player,MyCompare02> group1;
	group1.insert(player(6, "澄闪"));
	group1.insert(player(5, "羽毛笔"));
	group1.insert(player(6, "安洁莉娜"));
	group1.insert(player(6, "艾雅法拉"));
	group1.insert(player(4, "桃金娘"));
	group1.insert(player(2, "杜林"));
	group1.insert(player(3, "斑点"));
	group1.insert(player(6, "能天使"));
	group1.insert(player(4, "安比尔"));
	group1.insert(player(5, "杏仁"));
	for (player it:group1)
	{
		it.showplayer();
	}
	std::cout << std::endl;
}

int main()
{
	test01();
	test02();
}

