#include<iostream>

using namespace std;

class Player
{
public:
	int x, y;
	int speed;

	void Move(int x, int y)
	{
		this->x += x;
		this->y += y;
	}
};

class log
{
	public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;

	private :
	int m_LogLevel = LogLevelInfo;

	public :

	void SetLevel(int level)
	{
		m_LogLevel = level;
	}

	void Warn(const char* message)
	{
		if(m_LogLevel >= LogLevelWarning)
			cout<<"[Warning] : "<<message<<endl;
	}

	void Error(const char* message)
	{
		if(m_LogLevel >= LogLevelError)
			cout<<"[Error] : "<<message<<endl;
	}

	void Info(const char* message)
	{
		if(m_LogLevel >= LogLevelInfo)
			cout<<"[Info] : "<<message<<endl;
	}

};

int main()
{
	Player p;
	p.x=10;

	log l;
	l.SetLevel(l.LogLevelWarning);
	l.Warn("Hello");
	l.Error("Hello");
	l.Info("Hello");
}