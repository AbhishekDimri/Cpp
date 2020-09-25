#include<bits/stdc++.h>
using namespace std;
int greatest_common_divisor(int n,int m)
{
    if((n>=m)&&((n%m)==0))
    return m;
    else
    {
        greatest_common_divisor(m,(n%m));
    }
    
}

int main()
{
    int n,m,r;
    cout<<"Enter two number to get the greates common divisor : ";
    cin>>n>>m;
    if(n<m)
    {
        n=n+m;
        m=n-m;
        n=n-m;
    }
    if((n-m)>m)
    {
       r= greatest_common_divisor((n-m),m);
    }
    else
    {
        r=greatest_common_divisor(m,(n-m));

    }
    cout<<r;
    
}