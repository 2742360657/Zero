#include<iostream>

int main()
{
	std::list<int> a = { 1,2,3,4 };
	a.push_back(5);//末尾插入
	a.push_front(0);//头部插入(插入后front和back会移动）
	std::cout << a.front() << "," << a.back() << "\n";//分别为第一个和最后一个元素（c++是双向链表）

	a.pop_back();//末尾删除（back前移）
	a.pop_front();//头部删除（front后移）
	std::list<int>::iterator mc = a.end ();//链表迭代器,end会指向最后一位的下一位，front指向最后一位,即std::cout << *a.end();会报错
	std::cout << *(--mc) << "," << *(--mc) << "\n";
	

	std::vector<int> b = { 9,8,7,6 };
	std::cout << b[0] << "\n";//支持随机访问
	b.push_back(5);
	std::cout << b[4] << "\n";


}

