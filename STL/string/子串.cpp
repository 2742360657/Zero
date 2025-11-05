#include"ipch.h"
using namespace std; 

void test01()
{
	//string substr(int pos = 0, int n = npos) const;  //返回由pos开始的n个字符组成的字符串
	string str = "abcdefg";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;

	string email = "hello@sina.com";
	int pos = email.find("@");
	string direction = email.substr(pos, string::npos);//长度string::npos表示到末尾（好像也可以写特别大，有越界保护）
	cout << "direction: " << direction << endl;

}

int main() {

	test01();

	system("pause");

	return 0;
}