#include<iostream>
std::tuple<std::string, int> player(int age,std::string name)
{
	return { name,age };
};

int main()
{
	auto [name, age] = player(5, "suxi");//c++17及以后
	std::cout << name;
}

