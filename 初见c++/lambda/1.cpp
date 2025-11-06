#include<iostream>

void PrintValue(int value)
{
    std::cout << "Value: " << value << std::endl;
}

void ForEach(const std::vector<int>& values, void(*func)(int))//注意方法的数据类型原始函数指针void(*func)(int)，func是变量名，int是使用的参数
{
    for (int value : values)
    {
        func(value);
    }
}

int main()
{
    std::vector<int> values = { 1, 5, 4, 2, 3 };
    ForEach(values, PrintValue);

    std::cin.get();
}

