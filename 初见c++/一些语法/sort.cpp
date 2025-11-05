#include"ipch.h"

int main()
{
    std::vector<int> values = { 3, 5, 1, 4, 2 };
    std::sort(values.begin(), values.end(), [](int a, int b) {return a > b; });
    //此处提供了一个自定义的比较函数（lambda 表达式）来改变排序的行为\
    即std::sort(first, last, CompareFunction);\
    CompareFunction: 一个可调用对象，接受两个参数并返回一个布尔值，指示第一个参数是否应该在第二个参数之前。（如果返回 true，则 a 会被放置在 b 之前，反之b在a前）

    for (int value : values)
    {
        std::cout << value << ",";
    }

}