#include<iostream>
#include<set>

void PS(std::set<int>& s)
{
	for (int it:s)
	{
		std::cout << it << " ";
	}
	std::cout << std::endl;
}

void test()
{
	std::set<int>a;
	for (int i = 0; i < 10; i++)
	{
		a.insert(i);
	}
	PS(a);
	a.erase(5);
	PS(a);
	a.clear();
	if (a.empty())
	{
		std::cout << "一滴都不剩了\n";
	}
	for (int i = 0; i < 10; i++)
	{
		a.insert(i);
	}
	std::set<int>::iterator zuo = a.begin();
	std::set<int>::iterator you = a.begin();
	for (int i = 0; i < 2; i++)
	{
		zuo++;
		you++;
		you++;
	}
	std::cout<<*zuo<<"  "<<*you<<"\n";
	std::set<int>::iterator zuo2 = zuo;//实际上没必要弄这一步
	//如果创建一个a.end()迭代器，会是一个哨兵值，不能被递减（否则变成一个无效的迭代器）
	a.erase(zuo, you);//其中不能有end，否则报错
	PS(a);
	zuo2 = a.begin();// 重新定位 zuo2 到删除后的新位置
	//因为之前zuo2是zuo的副本，但是zuo的位置的元素已经删除，所以迭代器失效
	for (int i = 0; i < 2; i++) // 移动到新的第三个元素
	{
		zuo2++;
	}
	a.erase(zuo2);
	PS(a);
}

int main()
{
	test();
}

