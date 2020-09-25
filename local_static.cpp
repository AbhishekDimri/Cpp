#include<iostream>

using namespace std;

void Function()
{
	static int i=0;
	i++;
	cout<<i<<" ";
}

int main()
{
	Function();
	Function();
	Function();
}