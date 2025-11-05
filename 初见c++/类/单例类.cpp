#include"ipch.h"
/* 效果与下面的class相同
class Singleton
{
private:
	static Singleton* s_Instance;
public:
	static Singleton& Get()
	{
		return *s_Instance;
	}
	void Hello()
	{
		std::cout << "Hello" << std::endl;
	}
};
Singleton* Singleton::s_Instance = nullptr;
*/

class Singleton
{
public:
	static Singleton& Get()//只有在第一次调用时会创建实例，后续调用都会返回已存在的实例
	{
		static Singleton instance;
		return instance;
	}
	void Hello()
	{
		std::cout << "Hello" << std::endl;
	}
};

int main()
{
	Singleton::Get().Hello();

}