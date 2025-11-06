#include<iostream>
using namespace std;

//vector& operator=(const vector& vec);		// 重载等号操作符
//assign(beg, end);			//将[beg, end)区间中的数据拷贝赋值给本身。
//assign(n, elem);			//将n个elem拷贝赋值给本身。

template <class T>
void printVector(vector<T>& v) {

	for (const T& it:v) {
		cout << it << " ";
	}
	cout << endl;
}

//赋值操作
void test01()
{
	vector<string> v1(3,"苏茜"); 
	printVector(v1);

	vector<string>v2;
	v2 = v1;
	printVector(v2);

	vector<string>v3;
	v3.assign(v1.begin()+1, v1.end()-1);
	printVector(v3);

	vector<string>v4;
	v4.assign(5, "可爱");
	printVector(v4);
}

int main() {

	test01();

	system("pause");

	return 0;
}

