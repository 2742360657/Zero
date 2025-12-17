#include<iostream>
struct ch1
{
public:
	std::string qude() { return "苏茜"; }//在std前加virtual（创建为虚函数类型，则ch2中会重新定义该函数，ca输出澄闪）
	/*
	如果输入virtual std::string qude() = 0;会将qude设置为一个纯虚函数，则在子类中必须实例方法（重写），虚函数仅仅作为一个接口
	*/
};

struct ch2 : ch1
{
private:
	std::string m_name;
public:
	ch2(const std::string& name)
		:m_name(name){}

	std::string qude() { return m_name; }//可以在（）后加override，意为重写函数（但是此时基类函数必须为虚函数）,ca输出澄闪，也可以不加（c++11开始使用）
};

int main()
{
	ch1* c1=new ch1();
	std::cout << c1->qude() << std::endl;
	ch2* c2 = new ch2("澄闪");
	std::cout << c2->qude() << std::endl;
	ch1* ca = c2;
	std::cout << ca->qude() << std::endl;//此处会默认使用父类中的方法（苏茜）
	/*
	此处如果输入
	ch2* cb = c1;
	std::cout << cb->qude() << std::endl;
	会报错，"ch1*"类型的值不能用于初始化"ch2*"类型的实体
	*/

}

