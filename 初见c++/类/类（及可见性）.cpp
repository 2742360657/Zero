#include<iostream>
class Log//struct和class用法相同，但是class默认私有，struct默认公有
{
public://数值
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelTrace = 2;
private:
	int m_LogLevel = LogLevelTrace;//m一般表示私有
public://方法
	void SetLevel(int Level)
	{
		m_LogLevel = Level;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LogLevelError)
			std::cout << "[Error]:" << message << std::endl;
	}
	void Warning(const char* message)
	{
		if (m_LogLevel >= LogLevelWarning)
			std::cout << "[Warning]:" << message << std::endl;
	}
	void Trace(const char* message)
	{
		if (m_LogLevel >= LogLevelTrace)
			std::cout << "[Trace]:" << message << std::endl;
	}
};
/*
函数可见性在c++中分为以下三种
public：全局可以访问
protected：可以在该类的子类中访问
private：仅在类中可以访问（也可以在友元，friend中访问）
*/
int main()
{
	Log log;
	log.SetLevel(log.LogLevelWarning);
	log.Error("Hello!");
	log.Warning("Hello!");
	log.Trace("Hello!");
	std::cin.get();
}

