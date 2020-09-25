#include<iostream>
#include<vector>

using namespace std;

void print(int value)
{
	cout<<"value : "<<value<<endl;
}

void For(const vector<int>& values, void(*fun)(int))
{
	for(int value : values)
		fun(value);
}

void helo()
{
	cout<<"hello world"<<endl;
}

void hello(int a)
{
	cout<<"the value inserted is : "<<a<<endl;
}

int  main()
{

	vector<int> v = {1,2,3,4,5,6};

	typedef void(*datatype)(int);

	datatype fun1 = hello;

	void(*cherno)() = helo;
	auto fun = helo;

	fun();
	cherno();
	fun1(8);

	For(v,print);
}