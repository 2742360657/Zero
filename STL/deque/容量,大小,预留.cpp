#include"ipch.h"

//deque.empty()              判断容器是否为空
//deque.size()               返回容器中元素的个数
//deque.resize(num)          重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
//​			                 如果容器变短，则末尾超出容器长度的元素被删除。
//deque.resize(num, elem)    重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
//							 如果容器变短，则末尾超出容器长度的元素被删除。

void test(std::deque<std::string> a)
{
	if (a.empty())//空返回1
	{
		a.resize(5, "苏茜");
		std::cout << "坏家伙\n";
	}
	else
	{
		std::cout << "好乖好乖\n";
	}
	//没有capacity
	std::cout << "size:" << a.size() << std::endl;
	for (std::string& it : a)
	{
		std::cout << it << " ";
	}
	std::cout << "\n";
}

int main() 
{
	std::deque < std::string > a(5);
	std::deque < std::string > b;
	b.resize(5,"喵喵喵");
	std::deque < std::string > c;
	test(a);
	test(b);
	test(c);
}