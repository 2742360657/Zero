#include<iostream>

struct Timer
{
    std::chrono::time_point<std::chrono::steady_clock> start, end; // 定义开始和结束时间点
    std::chrono::duration<float> duration; // 定义持续时间，以浮点数秒为单位

    Timer() // 构造函数
    {
        start = std::chrono::high_resolution_clock::now(); // 初始化开始时间为当前的高精度时间
    }

    ~Timer() // 析构函数
    {
        end = std::chrono::high_resolution_clock::now(); // 析构时记录结束时间为当前的高精度时间
        duration = end - start; // 计算持续时间，即结束时间减去开始时间
        float ms = duration.count() * 1000.0f;
        std::cout << "耗时：" << ms << std::endl;
    }
};

int main()
{
    Timer js;
    for (int i = 0; i < 200; i++)
    {
        std::cout << "可爱的苏茜\n";
    }
}

