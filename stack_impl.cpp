#include<bits/stdc++.h>

using namespace std;
int pos =0, tp;

bool isfull()
{
	if(pos == tp)
		return 1;
	
	else
		return 0;
}


void push( int value, int a[] )
{
	if(!isfull())
 	{
		pos++;
		a[pos] = value;
		cout<<"Push the value "<<value<<endl;
	}
	else
	{
		cout<<"Stack Overflow value "<<value<<" cannot be pushed\n";
	}
	
}

void pop(int a[])
{
	if(pos!=-1)
	{
		cout<<"Value "<<a[pos]<<" Pop\n";
		pos--;
	}
	else
	{
		cout<<"Stack is empty\n";
	}
	
}

int top(int a[])
{
	if(pos!=-1)
	{
		return a[pos];
	}
	else
	{
		return -1;
	}	
}


int main()
{
	string s;
	cin>>s;
	tp = s.size();
	int st[tp];

	for (int i = 0; i < tp; i++)
	{
		if(isdigit(s[i]))
			push(stoi(s[i])), st);

		else
		{
			int a = top(st);
			pop(st);
			int b = top(st);
			pop(st);
			if(s[i] == '*')
				push(a*b, st);
			else if(s[i] == '+')
				push(a+b, st);
			else if(s[i] == '-')
				push(a-b, st);
			else if(s[i] == '^')
				push(a^b, st);
			else if(s[i] == '/')
				push(a/b, st);
		}
		
	}

	cout<<top(st);
	
}