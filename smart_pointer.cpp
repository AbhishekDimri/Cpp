#include<iostream>
#include<memory>

using namespace std;

class Entity
{
	public:

	Entity()
	{
		cout<<"Constructor "<<endl;
	}

	~Entity()
	{
		cout<<"Destructor \n";
	}

	void show()
	{
		cout<<"Show function called\n";
	}
};

int main()
{
	{
		unique_ptr<Entity> entity = make_unique<Entity>();
		entity->show();
	}

	{
		shared_ptr<Entity> e0;
		{
			shared_ptr<Entity> shared = make_shared<Entity>();
			weak_ptr<Entity> weak = shared;
			e0 = shared;
		}
	}
}
