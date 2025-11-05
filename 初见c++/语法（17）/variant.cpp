#include"ipch.h"

enum class ErrorCode// 定义一个枚举类，用于表示不同的错误代码
{
	None = 0,    // 没有错误
	NotFound = 1, // 文件未找到
	NoAccess = 2  // 没有访问权限
};

std::variant<std::string, ErrorCode> ReadFileAsString()
{
	//读取文件，返回文件类型（string）或者读取情况（Error Code）\
	即可以直接读取，自动识别类型(此处不允许使用auto）
}

int main()
{
	std::variant<std::string, int> data;
	data = 520;
	data = "苏茜";
	rsize_t a = data.index();//这里会返回1，即可能的数据类型的位置
	if(std::get_if<std::string>(&data))//如果是这个类型，返回地址，不是则返回空指针
	{
		std::cout << std::get<std::string>(data) << "\n";
	}
	else
	{
		std::cout << std::get<int>(data) << "\n";
	}
}