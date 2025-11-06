#include<iostream>
struct Vector2
{
    float x, y;
};

void dayin(Vector2 js)
{
    std::cout << js.x << "," << js.y;
}

struct Vector4
{
    union//共用同一处内存，也就是说a相当于是Vector2（x，y），b同理（即相同数据采用不同解读方法）
    {
        struct
        {
            float x, y, z, w;
        };
        struct
        {
            Vector2 a, b;
        };
    };
};

int main()
{
    Vector4 a = { 1,2,3,4 };
    dayin(a.a);//本质上有点像类型双关，即下行代码
    dayin(*(Vector2*)&a.x);//将指向x的指针当作vector指针使用
}

