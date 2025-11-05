#include <functional>
#include<iostream>

//template<class T > T plus<T>				//加法仿函数
//template<class T > T minus<T>				//减法仿函数
//template<class T > T multiplies<T>		//乘法仿函数
//template<class T > T divides<T>			//除法仿函数
//template<class T > T modulus<T>			//取模仿函数
//template<class T > T negate<T>			//取反仿函数

void test01()
{
	std::negate<int> n;
	std::cout << n(50) << std::endl;
}

void test02()
{ 
	std::plus<int> p;
	std::cout << p(10, 20) << std::endl;
}

int main()
{
	test01();
	test02();
}