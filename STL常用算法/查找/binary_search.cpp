#include<vector>
#include<algorithm>
#include<iostream>

void test()
{
	std::vector<int> a;
	a.assign({ 1,3,5,7,8,9,12,324,5354,34323,3453346,434523442 });
	bool aaa = std::binary_search(a.begin(), a.end(), 7);
	if (aaa)
	{
		std::cout << "有的有的";
	};
}

int main()
{
	test();
}