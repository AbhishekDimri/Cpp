#include<iostream>

using namespace std;

struct entity
{
	static int x, y;
	entity()
	{
		cout<<"Construtctor\n";
	}

	void print()
	{
		cout<<x<<" "<<y<<endl;
	}
};

int entity::x;
int entity::y;

int main()
{
	entity e;
	e.x = 2;//entity::x = 2
	e.y = 3;//entity::y = 3

	entity e1;
	e1.x = 5;//entity::x = 5
	e1.y = 8;//entity::x = 8

	e.print();
	e1.print();
}