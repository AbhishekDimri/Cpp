#include<iostream>

using namespace std;

void incr(int* value)
{
	(*value)++;
}

void increment(int& value)
{
	value++;
}

int main()
{
	int a =5;
	int& ref = a;
	ref = 2;

	incr(&a);

	cout<<a<<endl;

	increment(a);

	cout<<a;
}