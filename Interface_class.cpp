#include<iostream>
#include<string>

using namespace std;

class Printable
{
	public :
	virtual string GetClassName() = 0;

};

class Entity: public Printable
{
	public:
	
	string  GetClassName() override{ return "Entity";}
};

class Player : public Entity
{
	private :
	string m_name;
	public:
	Player(const string& name)
	:m_name(name){}

	string  GetClassName()override	{ return "Player";}
};

void print (Printable* obj)
{
	cout<<obj->GetClassName()<<endl;
}

int main()
{
	Entity* e = new Entity();

	Player* p = new Player("Abhi");

	Entity* en = p;


	print(e);
	print(p);
	print(en);
}