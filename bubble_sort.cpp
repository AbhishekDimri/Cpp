#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {8, 22, 7, 9, 31, 19, 5, 13}, n=0;
    //cout<<"Enter size of an array";
    //cin>>size;
    //cout<<"Enter element in an array";
    // for(int i=0;i<size;i++)
    //     cin>>arr[i];
    for(int i=0;i<8;i++)
    {
        int flag=0;
        for(int j=0;j<8;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                n++;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    cout<<n;
}
