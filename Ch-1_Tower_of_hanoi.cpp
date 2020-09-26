#include<bits/stdc++.h>

using namespace std;

void toh(int n, char Beg, char Aux, char End)
{
	if(n>=1)
	{
		toh(n-1,Beg, End, Aux);
		cout<<Beg<<End<<endl;
		toh(n-1,Aux,Beg,End);
	}
}

 main()
{
	toh(3,'A','B','C');
}