#include<iostream>

int main()
{
	const char* name = "苏茜";
	std::string name2 = "澄闪";
	std::cout << name2 << "\n";
	name2 += "可爱捏";//可以补加字符（重载）
	std::cout << name2 << "\n";
	//不能写std::string name = "可爱的" + "苏茜";也就是不能把两个指针相加
	name2 = "苏茜可爱捏";//应该直接重新写
	std::cout << name2 << "\n";
	std::string shuju = R"(R可以忽略转义字符，也就是现在所有括号内的东西都会直接输出
	//包括换行，\0也会失去作用
	)后接"才会结束
	)";
	std::cout << shuju << "\n";
}
//在C++中，std::string 类提供了许多用于操作字符串的成员函数。以下是一些常用的 std::string 成员函数：
//构造函数：
//string()：默认构造一个空字符串。
//string(const char* s)：从C风格字符串构造。
//string(const string& str)：复制构造函数。
//string(size_t n, char c)：构造一个由n个字符c组成的字符串。
//赋值与连接：
//operator=(const string& str)：赋值运算符。
//operator+=(const string& str)：连接字符串。
//operator+=(char c)：在字符串末尾添加一个字符。
//访问元素：
//operator[](size_t pos)：访问指定位置的字符。
//at(size_t pos)：访问指定位置的字符，带边界检查。
//修改字符串：
//append(const string& str)：在字符串末尾追加另一个字符串。
//append(size_t n, char c)：在字符串末尾追加n个字符c。
//erase(size_t pos = 0, size_t len = npos)：从字符串中删除字符。
//insert(size_t index, const string& str)：在指定位置插入字符串。
//replace(size_t pos, size_t len, const string& str)：替换子字符串。
//clear()：清空字符串。
//比较：
//compare(const string& str)：比较字符串。
//compare(size_t pos1, size_t len1, const string& str)：比较子字符串。
//compare(const char* s)：与C风格字符串比较。
//查找与替换：
//find(const string& str, size_t pos = 0)：查找子字符串。
//find(char c, size_t pos = 0)：查找字符。
//rfind(const string& str, size_t pos = npos)：从后向前查找子字符串。
//replace(size_t pos, size_t len, const string& str)：替换子字符串。
//子字符串：
//substr(size_t pos = 0, size_t len = npos)：获取子字符串。
//大小与容量：
//size()：获取字符串长度。
//length()：获取字符串长度（与size相同）。
//max_size()：获取最大可能的字符串长度。
//capacity()：获取当前分配的存储空间。
//其他：
//empty()：检查字符串是否为空。
//resize(size_t n, char c)：调整字符串大小。
//reserve(size_t res_arg)：预留存储空间。
//c_str()：获取C风格字符串。
//data()：获取字符串数据。

