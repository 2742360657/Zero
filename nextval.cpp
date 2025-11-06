#include <iostream>
#include <string>

int *getNext(std::string pattern)
{
    int n = pattern.length();
    int *result = new int[n];
    result[0] = -1;
    result[1] = 1;
    int j = -1; // 当前最长匹配的前缀长度
    int i = 0;  // 当前处理的位置

    while (i < n - 1)
    {
        if (j == -1 || pattern[i] == pattern[j])
        {
            ++i;
            ++j;
            result[i] = j;
        }
        else
        {
            j = result[j]; // 回溯
        }
    }
    return result;
}

int main()
{
    std::string a;
    std::cout << "请输入文本\n";
    std::cin>>a;
    for (int i = 0; i < a.length(); i++)
    {
        std::cout << getNext(a)[i];
    }
    std::cout << "\n";
    system("pause");
}