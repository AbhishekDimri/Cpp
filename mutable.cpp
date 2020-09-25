#include<iostream>
#include<string>

class Entity
{
	private:
	std::string m_Name = "VSCODE";
	mutable int m_debugcount = 0;
	public:

	const std::string Getname() const
	{
		m_debugcount++;
		return m_Name;
	}
	
};

int main()
{
	Entity e;
	std::cout<<e.Getname()<<std::endl;


	int x=8;
	auto f=[=]() mutable
	{
		x++;
		std::cout<<"hello "<<x<<std::endl;
	};

	f();

	std::cout<<x;
}