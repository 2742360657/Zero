#include<iostream>

int main()
{
    using namespace std::literals::chrono_literals; // 使用chrono_literals命名空间，方便使用时间字面量，如1s

    auto start = std::chrono::high_resolution_clock::now(); // 获取当前的高精度时间作为开始时间
    std::this_thread::sleep_for(1s); // 让当前线程休眠1秒
    auto end = std::chrono::high_resolution_clock::now(); // 获取当前的高精度时间作为结束时间

    std::chrono::duration<float> duration = end - start; // 计算时间差，结果以秒为单位
    std::cout << duration.count() << "s " << std::endl; // 输出时间差，即休眠的秒数

}

