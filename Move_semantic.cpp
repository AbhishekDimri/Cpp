#include<iostream>

using namespace std;

class String
{
public:
	String() = default;
	String(const char* s) 
	{
		cout << "created\n";
		m_size =  strlen(s);
		m_data = new char[m_size];

		memcpy(m_data, s, m_size);
	}

	String(const String& other)
	{
		cout << "copied\n";
		m_size = other.m_size;
		m_data = new char[m_size];

		memcpy(m_data, other.m_data, m_size);
	}

	void print()
	{
		for (uint32_t i = 0; i < m_size; i++)
		{
			cout << m_data[i] << " ";
		}
		cout << endl;
	}

	String(String&& other) noexcept
	{
		cout << "Moved\n";
		m_size = other.m_size;
		m_data = other.m_data;

		other.m_size = 0;
		other.m_data = nullptr;
	}
	~String()
	{
		cout << "Destroyed!!\n";
		delete m_data;
	}

private:
	char* m_data;
	uint32_t  m_size;
};
class Entity
{
public: 
	Entity(const String& name) : m_name(name) {}

	Entity(String&& name) : m_name(move(name)) {}

	void PrintName()
	{
		m_name.print();
	}
private:
	String m_name;
};

int main()
{	
	Entity entity(String("Abhi"));
	entity.PrintName();

	String s = "Hello";
	String dest(move(s));  //String dest(String&&(s));

	cin.get();
}