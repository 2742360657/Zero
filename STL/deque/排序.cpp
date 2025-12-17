#include<iostream>

//sort(iterator beg, iterator end)    对beg和end区间内元素进行排序

int main()
{
	std::deque<int> 可爱;
	可爱.assign({ 1,0,4,8,5,9,6 });
	std::deque<int>::iterator kbegin = 可爱.begin();
	std::deque<int>::iterator kend = 可爱.end();
	for (int& abc : 可爱)
	{
		std::cout << abc << " ";
	}
	sort(kbegin, kend);//所以别用const
	for (int& abc : 可爱)
	{
		std::cout << abc << " ";
	}
}

