#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n, k;
		cin>>n>>k;

		int a[n];

		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		for(int i=0;i<n; i+=k)
		{
			if(i+k < n){
			reverse(a+i, a+i+k);
			}

			else
			{
				reverse(a+i, a+n);
			}
			
		}

		for(int i : a)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}