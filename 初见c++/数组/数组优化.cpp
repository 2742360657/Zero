#include<iostream>
struct sanyuan
{
	float a, b, c;
	sanyuan()
		:a(0), b(0), c(0)
	{
	}
	sanyuan(float a, float b, float c)
		:a(a), b(b), c(c)
	{
	}
	sanyuan(const sanyuan& qt)
		:a(qt.a), b(qt.b), c(qt.c)
	{
		std::cout << a << "," << b << "," << c << std::endl;
	}
};

int main()
{
	std::vector <sanyuan>a;
	a.reserve(3);//将容量设置为3（只提供容量为3）
	//若不设置为3，则在导入加入第n个snayuan时（超出容量），会将之前的所有三元（n-1个）全部复制一遍，将所有内容放到新的vector的位置
	//std::vector <sanyuan>a(3);	如果写成这个形式，会直接创建3个sanyuan（vector对象）
	a.push_back({ 1,2,3 });//{1，2，3}在main中构造，然后复制到vector的位置，因此会有一次复制（传递已构建的vector对象）
	a.emplace_back(4, 5, 6);//传递参数列表，所以不会复制
	//a.emplace_back({ 4,5,6 });	如果写成这样会报错,{ 4,5,6 }无法作为一个初始化的参数列表（可以写成vector{ 4,5,6 }，但是会创建一个sanyuan，因此还是会复制）
	a.emplace_back(7, 8, 9);
}

