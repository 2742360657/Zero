#include"ipch.h"
using namespace std;

//string构造
void test01()
{
	string s1; //创建空字符串，调用无参构造函数
	cout << "str1 = " << s1 << endl;

	const char* str = "hello world";
	std::cout << str << "\n";//<< 运算符的重载版本识别出 str 是一个指向常量字符的指针，并从该指针开始输出字符，直到遇到字符串末尾的空字符为止
	string s2(str); //把c_string转换成了string

	cout << "str2 = " << s2 << endl;

	string s3(s2); //调用拷贝构造函数
	cout << "str3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "str4 = " << s4 << endl;
}
/*
string()					//创建一个空的字符串 例如: string str;
string(const char* s)		//使用字符串s初始化
string(const string& str)	//使用一个string对象初始化另一个string对象
string(int n, char c)		//使用n个字符c初始化 
*/

int main() {

	test01();

	system("pause");

	return 0;
}