#include<iostream>

int main()
{
	std::ifstream ifs;
	ifs.open("string.in.txt", std::ios::in);
	int n;
	std::string s, x;
	ifs >> n;
	std::getline(ifs, s);
	std::getline(ifs, s);
	std::getline(ifs, x);
	ifs.close();
	s = s.substr(0, n - 1);
	s += x;
	std::reverse(s.begin(), s.end());
	std::ofstream ofs;
	ofs.open("string.out.txt", std::ios::out);
	ofs << s;
}

