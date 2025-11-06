#include<iostream>

//* `push_back(ele); `                                      //尾部插入元素ele
//* `pop_back(); `                                          //删除最后一个元素
//* `insert(const_iterator pos, ele); `						//迭代器指向位置pos插入元素ele
//* `insert(const_iterator pos, int count, ele);			//迭代器指向位置pos插入count个元素ele
//* `erase(const_iterator pos); `							//删除迭代器指向的元素
//* `erase(const_iterator start, const_iterator end);		// 删除迭代器从start到end之间的元素
//* `clear(); `                                             //删除容器中所有元素

template<class T>
void dy(const std::vector<T>& sl)
{
	for (const T& it: sl)
	{
		std::cout << it << " ";
	}
		std::cout << "\n";
}

int main()
{
	std::vector<std::string> a(4, "苏茜");
	dy(a);
	a.push_back("毛茸茸的尾巴");
	dy(a);
	a.insert(a.begin() + 4, 1, "可爱捏");
	dy(a);
	a.erase(a.begin());
	dy(a);
	a.erase(a.begin(), a.begin() + 2);//这里a.begin() + 2作为end，不会被删除
	dy(a);
	a.pop_back();
	dy(a);
	a.clear();
}

