#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int pos =0, tp;
string a;

int precedance(char sc)
{
	if(sc == '^')
		return 3;
	else if(sc == '/'||sc == '*')
		return 2;
	else if(sc == '+'||sc == '-')
		return 1;

		return 0;
}

bool isfull()
{
	if(pos == tp)
		return 1;
	
	else
		return 0;
}

void push( char value )
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
void pop()
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


void top()
{
	if(pos!=-1)
	{
		cout<<"Top element = "<<a[pos]<<endl;
	}
	else
	{
		cout<<"Stack is empty\n";
	}
	
}

int main()
{
	string s = "K+L-M*N+(O^P)*W/U/V*T+Q^J^A", op ;
	// cout<<"Enter string : ";
	// cin>>s;

	tp = s.size();
	reverse(s.begin(), s.end());

	//   for(int i=0;i<s.size();i++)
    //     {
    //         if(s[i]=='(')
    //             s[i]=')';
    //         else if(s[i]==')')
    //             s[i]='(';
    //     }

	for(int i=0;i<tp;i++)
	{
		cout<<endl<<s[i]<<" turn\n";
		if((int)(s[i]) > 64 &&  (int)(s[i]) < 91 || (int)(s[i]) > 96 && (int)(s[i]) < 123)
			{
				cout<<"Output added "<< s[i]<<endl;
				op = op+s[i];
			}
		else if(s[i] == '(')
			{
				push(s[i]);
			}
		else if(s[i] == ')')
			{
				while(a[pos]!='(')
				{
					op = op+a[pos];
					pop();
				}
				pop();
			}
		else if (s[i] == ' ')
		{
			continue;
		}
		
		else
		{
			while (precedance(s[i])<=precedance(a[pos]))
				{
					op = op+a[pos];
					pop();
				}
			push(s[i]);
		}
		
	}
	cout<<endl;
	while(pos!=-1)
	{
		cout<<"Ad";
		op = op + a[pos];
		pop();
	}
	reverse(op.begin(), op.end());
	cout<<"Output String = "<<op;
}