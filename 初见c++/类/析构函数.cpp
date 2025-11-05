#include"ipch.h"
class zuobiao
{
	float x, y;
public:
	zuobiao()
	{
		std::cout << "created zuobiao" << std::endl;
		x = 0.0f;
		y = 0.0f;
	}
	~zuobiao()//构造函数前加一个~为析构函数，在实例中用于释放内存（跳出作用域时也会自动调用）
	{
		std::cout << "destroyed zuobiao" << std::endl;
	}
	void Print()
	{
		std::cout << x << "," << y << std::endl;
	}
};

void jiechu()
{
	zuobiao zuobiao1;
	zuobiao1.Print();
}
int main()
{
	jiechu();//执行完这个函数，进行下一行代码是久会调用析构函数
	std::cin.get();
}