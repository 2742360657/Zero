#include"ipch.h"
using namespace std;
//自定义数据类型
class Person {
public:
	Person(string name, int age) {
		mName = name;
		mAge = age;
	}
public:
	string mName;
	int mAge;
};
//存放对象
void test01() {

	vector<Person> v;

	//创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "Name:" << (*it).mName << " Age:" << (*it).mAge << endl;

	}
}


//放对象指针
void test02() {

	vector<Person*> v;
	//不能用vector<Person*> v（10）;会直接创建10个实例（NULL），导致后续push_back时从11开始加
	//但是可以在后面加上v.clear();后使用（应该是会清除NULL）
	v.reserve(10);//容器预留10个元素长度，预留位置不初始化，元素不可访问。
	std::cout << v.size();

	//创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);
	std::cout << v.capacity() << "\n";
	v.push_back(&p1);
	std::cout << v.capacity() << "\n";
	v.push_back(&p2);
	std::cout << v.capacity() << "\n";
	v.push_back(&p3);
	std::cout << v.capacity() << "\n";
	v.push_back(&p4);
	std::cout << v.capacity() << "\n";
	v.push_back(&p5);
	std::cout << v.capacity() << "\n";

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
		Person* p = (*it);
		cout << "Name:" << p->mName << " Age:" << (*it)->mAge << endl;
	}
}


int main() {

	test01();

	test02();

	return 0;
}