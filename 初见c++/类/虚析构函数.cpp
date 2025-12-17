#include<iostream>
class Base
{
public:
	Base()
	{
		std::cout << "Base contributed." << std::endl;
	}
	virtual ~Base()// 虚析构函数，确保派生类对象被正确销毁\
		虚析构函数不会让仅派生类析构函数生效，而是两次调用析构函数(先派生类，然后基类)\
		若不使用虚析构函数则只销毁基类，派生类无法正确销毁
	{
		std::cout << "Base destructored." << std::endl;
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		std::cout << "Derived contributed." << std::endl;
	}
	~Derived()
	{
		std::cout << "Derived destructored." << std::endl;
	}
};

int main()
{
	Base* basePtr = new Derived(); // 通过基类指针创建派生类对象
	delete basePtr; // 删除对象，触发虚析构函数
	return 0;
}

