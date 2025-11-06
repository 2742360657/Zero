#include<iostream>

struct erwei
{
	float x, y;
	erwei(float x, float y)
		:x(x), y(y) {}

	erwei operator+ (const erwei& Bianliang) const
	{
		return erwei(x + Bianliang.x, y + Bianliang.y);
	}
};
std::ostream& operator<< (std::ostream& stream, const erwei& other)
{
	stream << other.x << "," << other.y;
	return stream;
}

int main()
{
	erwei dizhi(0, 0);
	erwei sudu(1, 1);
	dizhi = dizhi + sudu;
	std::cout << dizhi.x << "," << dizhi.y;
}

