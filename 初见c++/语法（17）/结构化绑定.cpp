#include"ipch.h"
std::tuple<std::string, int> player(int age,std::string name)
{
	return { name,age };
};

int main()
{
	auto [name, age] = player(5, "suxi");//c++17¼°ÒÔºó
	std::cout << name;
}