#include<iostream>

//empty();               //判断容器是否为空
//capacity();            //容器的容量
//size();                //返回容器中元素的个数
//resize(int num);       //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//​						 //如果容器变短，则末尾超出容器长度的元素被删除。
//resize(int num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//​				         //如果容器变短，则末尾超出容器长度的元素被删除
//reserve(int len);		 // 容器预留len个元素长度，预留位置不初始化，元素不可访问。

void test(std::vector<std::string> a)
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
	std::cout << "capacity:" << a.capacity() << std::endl;
	std::cout << "size:" << a.size() << std::endl;
}

int main() 
{
	std::vector < std::string > a(5);
	std::vector < std::string > b;
	b.resize(5);
	std::vector < std::string > c;
	c.reserve(5);
	std::vector < std::string > d;
	test(a);
	test(b);
	test(c);
	test(d);
}

