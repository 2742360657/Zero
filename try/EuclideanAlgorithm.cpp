#include <iostream>

// int Gcd(int a, int b)
// {
//     if(a==0||b==0)
//     {
//         std::cout<<"error input\n";
//         return 0;
//     }
//     while (1)
//     {
//         if (a > b)
//         {
//             a = a % b;
//         }
//         else
//         {
//             b = b % a;
//         }
//         if(a==0)
//         {
//             return b;
//         }
//         if(b==0)
//         {
//             return a;
//         }
//         if(a%b==0)
//         {
//             return b;
//         }
//         if(b%a==0)
//         {
//             return a;
//         }
//     }
// }

int Gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

struct binary
{
    public:
    int a,b;
};

// binary GcdEquation(int a, int b)
// {
//     binary result,temp;
//     int c;
//     if(a==0||b==0)
//     {
//         return {a,b};
//     }
//     if(a>b)
//     {
//     temp=GcdEquation(b,a%b);
//     c=a/b;
//     }
//     else
//     {
//         if(a==b)
//         {
//             return{1,0};
//         }
//         else
//         {
//             temp=GcdEquation(a,b%a);
//             c=b/a;
//         }
//     }
//     result.a=temp.b;
//     result.b=temp.a-c*temp.b;
//     return result;
// }

binary GcdEquation(int a, int b) {
    if (b == 0)             // 基准情形：gcd(a,0)=a
    {
        return {1, 0};      // 此时 a*1 + 0*0 = a
    }
    binary temp = GcdEquation(b, a % b); // 递归求解 (b, a%b)
    // 根据递归结果推导当前层的系数
    int x = temp.b;
    int y = temp.a - (a / b) * temp.b;
    return {x, y};
}

int main()
{
    int a, b; // 实现：令ma+nb=gcd（a，b）
    std::cout<<"Input a and b"<<'\n';
    std::cin >> a >> b;
    std::cout<<"The common divisor is "<<Gcd(a,b)<<'\n';
    std::cout<<"GcdEquation is "<<GcdEquation(a, b).a<<"a "<<"+ "<<GcdEquation(a,b).b<<"b"<<" = gcd(a,b)"<<'\n';
}