#include<iostream>
#define 都不是 1

#ifdef Debug//如果debug被定义
#define log(x) std::cout<<x<<std::endl;
#elif defined Release//第二个判断条件（上一个不满足时）
#define log(x) std::cout << x << std::endl;
#endif
#if 都不是==1
#define MAIN int main() \
{\
std::cout << "宏使用"; \
}//这里的\用来表示MAIN这个宏包括换行后的内容\
注释也可以用\表示换行,所以如果在define的\后面插入注释会导致注释到了define的第二行并且无法在第二行插入\（会被认定为注释的\)
#endif 


MAIN

