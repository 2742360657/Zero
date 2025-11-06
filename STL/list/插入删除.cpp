#include<iostream>

//push_back(elem);			//在容器尾部加入一个元素
//pop_back();				//删除容器中最后一个元素
//push_front(elem);			//在容器开头插入一个元素
//pop_front();				//从容器开头移除第一个元素
//insert(pos, elem);		//在pos位置插elem元素的拷贝，返回新数据的位置。
//insert(pos, n, elem);		//在pos位置插入n个elem数据，无返回值。
//insert(pos, beg, end);	//在pos位置插入[beg,end)区间的数据，无返回值。
//clear();					//移除容器的所有数据
//erase(beg, end);			//删除[beg,end)区间的数据，返回下一个数据的位置。
//erase(pos);				//删除pos位置的数据，返回下一个数据的位置。
//remove(elem);				//删除容器中所有与elem值匹配的元素。

void printList(std::list <int>& a)
{
	for (int it : a)
	{
		std::cout << it << ",";
	}
	std::cout << "\n";
}

int main()
{
	std::list<int> abc;
	abc.push_front(1);
	abc.push_back(2);
	printList(abc);
	abc.pop_front();
	abc.pop_back();
	printList(abc);
	abc.push_front(1);
	abc.push_back(2);
	abc.insert(abc.begin(), 0);
	abc.insert(abc.begin(), 5,3);
	printList(abc);
	abc.remove(3);
	printList(abc);
	abc.clear();
	for (int i = 5; i != 0; i--)
	{
		abc.push_back(i);
	}
	printList(abc);
	abc.erase(++abc.begin(), --abc.end());
	printList(abc);
}

