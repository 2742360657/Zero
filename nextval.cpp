#include <iostream>
#include <string>
#include<vector>
//测试
int *getNext(std::string pattern)
{
    int n = pattern.length();
    int *result = new int[n];
    result[0] = 0;
    result[1] = 1;
    int j = 0; 
    int i = 1; 

    while (i < n - 1)
    {
        if (j == 0 || pattern[i] == pattern[j])
        {
            ++i;
            ++j;
            result[i] = j;
        }
        else
        {
            j = result[j]; 
        }
    }
    return result;
}

void getNextval(const std::string &pattern, std::vector<int> &nextval)
{
    int m = pattern.size();
    nextval.resize(m);
    nextval[0] = 0;
    int j = 0;
    int i = 1;

    while (i < m - 1) {
        if (j == 0 || pattern[i] == pattern[j]) {
            ++i;
            ++j;
            if (pattern[i] != pattern[j])
                nextval[i] = j;
            else
                nextval[i] = nextval[j];
        } else {
            j = nextval[j];
        }
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