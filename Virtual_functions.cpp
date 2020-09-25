#include<iostream>
#include<string>

using namespace std;

class Entity
{
	public:
	virtual string GetName(){return "Entity";}
};

class Player : public Entity
{
	private :
	string m_name;
	public:
	Player(const string& name)
	:m_name(name){}

	string GetName() override{ return m_name;}
};

int main()
{
	Entity* e = new Entity();
	cout<<e->GetName()<<endl;


	Player* p = new Player("Abhi");
	cout<<p->GetName()<<endl;

	Entity* en = p;
	cout<<en->GetName();


}