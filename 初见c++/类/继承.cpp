#include<iostream>
struct Direction
{
	float x = 0.0, y = 0.0;
	void move(int X, int Y)
	{
		x += X;
		y += Y;
	}
};

struct Player:public Direction//此处Player中包括Direction，即为继承，继承方法public非必须
{
	std::string name = "未命名";
	void Setname(std::string message)
	{
		name = message;
	}
	int Hp = 100;
	void damage(int i)
	{
		Hp -= i;
	}

};

int main()
{
	std::string name;
	Player P1;
	std::cout << "set name" << std::endl;
	std::cin >> P1.name;
	std::cout << "name：" << P1.name << std::endl << "Direction:(" << P1.x << "," << P1.y << ")" << std::endl << "Hp:" << P1.Hp << std::endl;

}

