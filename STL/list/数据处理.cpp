#include<iostream>
#include<list>

//reverse();		//反转链表
//sort();			//链表排序

void printList(const std::list<int>& L) 
{
	for (std::list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << "\n";
}

void test01()
{
	std::list<int> a;
	int b = 10;
	while (b--)
	{
		a.push_front(b);
	}
	for(int i=0;i<3;i++)
	{
		a.push_front(9);
	}
	for (int i = 0; i < 3; i++)
	{
		a.push_back(0);
	}
	printList(a);
	a.reverse();
	printList(a);
	a.sort();
	printList(a);
}

int main()
{
	test01();
}

