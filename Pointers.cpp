#include<bits/stdc++.h>

using namespace std;

int main()
{
	int var = 8;
	void* ptr1 = &var;
	void* ptr = nullptr;
	int* ptr2 = &var;

	cout<<ptr1<<" "<<ptr<<" "<<ptr2<<endl;

	*ptr2 = 10;
	//*ptr = 10;     //invalid move void pointer cannot assign any value to the address

	cout<<var;

	char* buffer = new char[8];
	memset(buffer, 0, 8);

	char **bptr = &buffer;

	delete[] buffer;
}