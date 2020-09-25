#include<bits/stdc++.h>

using namespace std;

int  pos_opt = 0, pos_opd = 0,tp;
string s,opt,opd;

int precedance(char sc)
{
	if(sc == '(')
		return 6;
	else if(sc == '^')
		return 5;
	else if(sc == '/')
		return 4;
	else if(sc == '*')
		return 3;
	else if(sc == '+')
		return 2;
	else if(sc == '-')
		return 1;

		return 0;
}

bool opd_full()
{
	if(pos_opd == tp)
		return 1;
	
	else
		return 0;
}
bool opt_full()
{
	if(pos_opt == tp)
		return 1;
	
	else
		return 0;
}

void push_opt( char value )
{
	if(!opd_full())
 	{
		pos_opt++;
		opt[pos_opt] = value;
		cout<<"Push the value to operator"<<value<<endl;
	}
	else
	{
		cout<<"Stack Overflow value "<<value<<" cannot be pushed\n";
	}	
}
void push_opd( char value )
{
	if(!opt_full())
 	{
		pos_opd++;
		opd[pos_opd] = value;
		cout<<"Push the value to operand "<<value<<endl;
	}
	else
	{
		cout<<"Stack Overflow value "<<value<<" cannot be pushed\n";
	}
	
}

void pop()
{
	if(pos_opd!=-1)
	{
		cout<<"Value "<<opd[pos_opd]<<" Pop\n";
		pos_opd--;
	}
	else
	{
		cout<<"Stack is empty\n";
	}
	
}

int top()
{
	if(pos_opd!=-1)
	{
		return opd[pos_opd];
	}
	else
	{
		return -1;
	}	
}

void move()
{
	char sc;
	sc = top();
	push_opt(sc);
	pop;
}

int main()
{
	s="(A+B)*C";
	//cin>>s;
	tp = s.size();

	for(int i=0;i<tp;i++)
	{
	if((int)(s[i]) > 64 &&  (int)(s[i]) < 91 || (int)(s[i]) > 96 && (int)(s[i]) < 123)
		{
			push_opd(s[i]);
		}
	else if(s[i] == '+'||s[i] =='-'||s[i] =='*'||s[i] =='/'||s[i] =='^')
		{
			push_opt(s[i]);
		}
	else if((s[i] == '('||s[i] == ')')&&i!=0)
		{
			while(pos_opd!=-1)
				move();
		}
	}

}