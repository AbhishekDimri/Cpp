#include<iostream>
using namespace std;
void  b_search(int arr[],int n,int data)
{
    int l=0;int u=n-1;
    while(l<u)
    {
        int mid=(l+u)/2;
        if(arr[mid]==data)
        cout<<"element is at "<<mid+1<<" location";
        if(data<arr[mid])
            u=mid-1;
        else l=mid+1;
    }
}
void b_search(int arr[],int l,int u,int data)
{
    int mid=(l+u)/2;
    if(data==arr[mid])
    cout<<"element is in "<< mid+1<<" location";
    if(data<arr[mid])
        b_search(arr,l,mid-1,data);
    else
        b_search(arr,mid+1,u,data);
}
int main()
{
    int arr[10];
    int data,n;int l=0,u=n;
    cout<<"enter size of an element ";
    cin>>n;
    cout<<"enter data in an array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter data you have to find";
    cin>>data;
 //    b_search(arr,n,data);
     b_search(arr,l,u,data);
}

