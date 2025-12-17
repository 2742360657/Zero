#include<iostream>
void ForEach(const std::vector<int>& values, const std::function<void(int)> &func)
{
    for (int value : values)
        func(value);
}

int main()
{
    std::vector<int> values = { 1, 5, 4, 2, 3 };
    std::string a = "值是：";

    auto lambda = [=](int value) mutable { a = "value is:"; std::cout << a << value << std::endl; };
    //[](int) {函数主体}    表示一个仅在此处使用的代码，[]表示捕获,后续函数中只能使用捕获的变量\
    []中加 = 表示可以通过值传递可用变量，加 & 表示用引用传递\
    也可以直接加变量名称（a或 & a），仅捕获需要的变量\
    此处用值传递的时候需要加上mutable才可以对传递值的副本进行更改（不改变原先变量）
    ForEach(values, lambda);
    std::cout << a;//a不改变

    auto it = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; });//代码实际应用场景
    std::cout << *it << std::endl;
}

