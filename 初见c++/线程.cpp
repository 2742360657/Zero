#include<iostream>

static bool s_Finished = false;

void DoWork()
{
	using namespace std::literals::chrono_literals;//设置1s间隔用的

	while (!s_Finished)//自检
	{
		std::cout << "Started thread id=" << std::this_thread::get_id() << std::endl;//输出线程ID（实际上一直是同一个）
		std::cout << "Working...\n";
		std::this_thread::sleep_for(1s);
	}
}

int main()
{
	std::thread worker(DoWork);//让这个void持续工作
	std::cin.get();
	s_Finished = true;//改变自检条件
	worker.join();//DoWork工作结束后再进行主程序内容
	std::cout << "Started thread id=" << std::this_thread::get_id() << std::endl;//这里线程ID改变
}

