#include<iostream>
class zuobiao
{

public:
	float x, y;//此处不会自动初始化
	zuobiao()//未指定构造函数但是仍然有一个函数，则为默认构造函数（与class同名)，创建实例会自动执行
	{
		x = 0.0, y = 0.0;//未提供参数时进行初始化
	}
	zuobiao(float X, float Y)
	{
		x = X; y = Y;//若给定了值则进行赋值，未给定时此函数不运行
		//在 C++ 中，当创建类的对象时，编译器会根据提供的参数类型和数量来决定调用哪个构造函数（无论如何只调用一个函数），这个过程称为重载解析
	}
	//若无函数，则c++会给你一个默认的空函数

	/*可以用一下代码时此类无法被创造实例
	zuobiao() = delete; //让c++不会再创造那个空函数
	或者
	private：
	zuobiao（）；//使函数不可见（不被访问）
	*/

	void Print()
	{
		std::cout << x << "," << y << std::endl;
	}

};
int main()
{
	zuobiao zuobiao1;
	zuobiao1.Print();
	std::cout << zuobiao1.x << std::endl;//有些编译器在此处报错（未初始化时）

}

