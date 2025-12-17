#include<iostream>

template<class T>
void printList(std::list <T>a)
{
	for (T it : &a)
	{
		std::cout << it << ",";
	}
	std::cout << "\n";
}

void test02()
{

	std::list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	std::list<int>L2;
	L2.assign(10, 100);

	std::cout << "交换前： " << std::endl;
	printList(L1);
	printList(L2);

	std::cout << std::endl;

	L1.swap(L2);

	std::cout << "交换后： " << std::endl;
	printList(L1);
	printList(L2);

}

int main() {

	test02();

	system("pause");

	return 0;
}

