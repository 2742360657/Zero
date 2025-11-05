#include"ipch.h"

class Log
{
public:
	enum Level
	{
		LevelError = 0, LevelWarning = 1, LevelTrace = 2
	};

private:
	Level m_LogLevel = LevelTrace;//m一般表示私有

public:
	void SetLevel(Level message)
	{
		m_LogLevel = message;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[Error]:" << message << std::endl;
	}
	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[Warning]:" << message << std::endl;
	}
	void Trace(const char* message)
	{
		if (m_LogLevel >= LevelTrace)
			std::cout << "[Trace]:" << message << std::endl;
	}
};

int main()
{
	Log log;
	log.SetLevel(Log::LevelWarning);
	log.Error("Hello! 0");
	log.Warn("Hello! 1");
	log.Trace("Hello! 2");
	std::cin.get();
}