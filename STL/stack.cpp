#include"ipch.h"

//构造函数：
//stack< T > stk                 //stack采用模板类实现， stack对象的默认构造形式
//stack(const stack& stk)       //拷贝构造函数

//赋值操作：
//stack& operator=(const stack& stk)    //重载等号操作符

//数据存取：
//push(elem)     //向栈顶添加元素
//pop()          //从栈顶移除第一个元素
//top()          //返回栈顶元素

//大小操作：
//empty()        //判断堆栈是否为空
//size()         //返回栈的大小

int main()
{
	std::stack<int> sx;
	if (sx.empty() == 1)
	{
		std::cout << "已经一滴都不剩了喵" << "\n";
	}
	int i = 10;
	while (i--)
	{
		sx.push(i);
	}
	std::cout<<"已经满了："<< sx.size() << "\n" <<"最后当然是"<<sx.top()<<"\n";
}