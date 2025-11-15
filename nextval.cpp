#include <iostream>
#include <string>
#include<vector>

int *getNext(std::string pattern)
{
    int n = static_cast<int>(pattern.size());
    if (n == 0) {
        return nullptr; // 空串自己处理一下
    }

    int *next = new int[n];
    next[0] = 0;
    int j = 0; // 当前匹配到的前缀长度

    for (int i = 1; i < n; ++i) {
        // 不匹配时回退 j
        while (j > 0 && pattern[i] != pattern[j]) {
            j = next[j - 1];
        }
        // 匹配就扩展前缀长度
        if (pattern[i] == pattern[j]) {
            ++j;
        }
        next[i] = j;
    }

    return next;
}


void getNextval(const std::string &pattern, std::vector<int> &nextval)
{
    int m = static_cast<int>(pattern.size());
    nextval.assign(m, 0); // 重置大小并置 0

    if (m == 0) return;

    int j = 0;
    nextval[0] = 0;

    for (int i = 1; i < m; ++i) {
        while (j > 0 && pattern[i] != pattern[j]) {
            j = nextval[j - 1];
        }
        if (pattern[i] == pattern[j]) {
            ++j;
        }
        nextval[i] = j;
    }
}


int main()
{
    std::string a;
    std::vector<int> b;
    std::cout << "请输入文本\n";
    std::cin>>a;
    for (int i = 0; i < a.length(); i++)
    {
        std::cout << getNext(a)[i];
    }
    std::cout << "\n";
    getNextval(a,b);
    for (int i = 0; i < b.size(); i++)
    {
        std::cout << b[i];
    }
    std::cout << "\n";
    system("pause");
}