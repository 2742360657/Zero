#include<iostream>

std::optional<std::string> ReadFileAsString(const std::string& filepath)
{
    std::ifstream stream(filepath);// 使用 ifstream 创建一个输入文件流对象，尝试打开指定路径的文件
    if (stream)
    {
        std::string result;//存储读取结果
        // 读取文件
        stream.close();
        return result;
    }
    return {}; // 如果文件未能打开，返回一个空的 std::optional 对象
}

int main()
{
    auto data = ReadFileAsString("data.txt");// 调用 ReadFileAsString 函数尝试读取 "data.txt" 文件的内容
    if (data)// 检查 std::optional 对象是否包含值（即文件是否成功读取）
    {
        std::cout << "成功读取\n";
    }
    else
    {
        std::cout << "读取失败\n";
    }
    return 0;
}

