#include<iostream>

int main()
{
	std::any data;//评价为纯纯搞笑，尽量别用
	data = 2;
	data = "苏茜";
	//std::string string = std::any_cast<std::string>(data);\
	如果尝试将 std::any 对象转换为 std::string 类型（如上），会报错，any会给一个默认的能储存的类型并且不可更改\
	分配小内存时直接分配，对象较大时动态分配内存，而variant都是直接分配
	return 0;
}

