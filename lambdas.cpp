#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;
void For(const vector<int>& values, const function<void(int)>& fun)
{
	for(int value : values)
		fun(value);
}

int  main()
{
	vector<int> v ={1,2,3,4,5};
	auto it = find_if(v.begin(),v.end(),[](int v){return v>3;});
	cout<<"it : "<<*it<<endl;

	int a=5;

	auto lambda =  [=](int value){cout<<"value : "<<value<<" and the pass by value stored in a is "<<a<<endl;};

	For(v,lambda);

	cout<<a;
}