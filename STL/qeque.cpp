#include<iostream>
//构造函数：
//queue< T > que;             //queue采用模板类实现，queue对象的默认构造形式
//queue(const queue & que);   //拷贝构造函数

//赋值操作：
//queue& operator=(const queue & que);  //重载等号操作符

//数据存取：
//push(elem);						//往队尾添加元素
//pop();                            //从队头移除第一个元素
//back();                           //返回最后一个元素
//front();							//返回第一个元素

//大小操作：
//empty();		//判断堆栈是否为空
//size();		//返回栈的大小

int main()
{
	std::queue<std::string> a;
	if (a.empty() == 1)
	{
		std::cout << "空的说\n";
	}
	a.push("小杯");
	a.push("中杯");
	a.push("大杯");
	std::cout << "size:" << a.size() << "\n";
	std::cout << "front:" << a.front() << "\n";
	std::cout << "back:" << a.back() << "\n";
	a.pop();
	a.pop();
	std::cout << "size:" << a.size() << "\n";
	std::cout << "front:" << a.front() << "\n";
	std::cout << "back:" << a.back() << "\n";
}

