#include<iostream>

class String
{
private:
	char* m_Data;       // 用于存储字符串数据的动态数组
	uint32_t m_Size;    // 存储字符串的长度

public:
	String() = default;

	String(const char* string)// 构造函数，从C风格字符串初始化String对象
	{
		printf("Created!\n");
		m_Size = strlen(string);  // 计算字符串长度
		m_Data = new char[m_Size]; // 分配内存
		memcpy(m_Data, string, m_Size); // 复制字符串数据
	}

	String(const String& other) // 拷贝构造函数，用于创建String对象的副本
	{
		printf("Copied!\n");
		m_Size = other.m_Size; // 复制长度
		m_Data = new char[m_Size]; // 分配内存
		memcpy(m_Data, other.m_Data, m_Size); // 复制字符串数据
	}

	String(String&& other) noexcept// 移动构造函数，用于移动String对象的资源
	{
		printf("Move!\n");
		m_Size = other.m_Size; // 复制长度
		m_Data = other.m_Data; // 接管资源
		other.m_Data = nullptr; // 清除原对象的资源指针
		other.m_Size = 0; // 重置原对象的大小
	}

	String& operator=(String&& other) noexcept//将=定义为移动操作
	{
		if (this != &other)//防止自身清除后无法复制
		{
			printf("Move!\n");
			delete[] m_Data;//清除当前对象已有的数据
			m_Size = other.m_Size;
			m_Data = other.m_Data;
			other.m_Data = nullptr;
			other.m_Size = 0;
		}
		return *this;
	}

	~String()
	{
		printf("Destroyed!\n");
		delete[] m_Data;
	}

	void Print()
	{
		for (uint32_t i = 0; i < m_Size; i++)
			printf("%c", m_Data[i]);

		printf("\n");
	}
};

class Entity
{
private:
	String m_Name;

public:
	Entity(const String& name)
		: m_Name(name) // 使用拷贝初始化
	{
	}

	Entity(String&& name)// 构造函数，接受一个右值引用String对象作为参数
		: m_Name(std::move(name)) // 使用移动初始化    这里应该是将name显式为&&来使用，否则会调用为const String& other
	{
	}

	void PrintName()
	{
		m_Name.Print();
	}
};

int main()
{
	Entity en("可爱的苏茜");; // 直接调用 String 的creat在堆上创建一个临时对象，然后Entity的构造函数接受 String&& 参数，让实例接管临时对象
	String st("喜欢捏");
	String fb;
	fb = std::move(st);//std::move是将一个对象转换为临时对象
	//如果直接写成 String fb = std::move(st); 就不是操作运算符，而是调用move函数
	st.Print();
	en.PrintName();
}

