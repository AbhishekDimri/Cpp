#include<iostream>
using namespace std;
binary_search(int l,int u,int data)
{
    int mid=(l+u)/2
    if(data==arr[mid])
        cout<<"Element found in "<<mid+1<<" loc";
    if(data<arrr[mid])
        binary_search(l,mid-1,data);
    else
        binary_search(mid+1,u,data);
}
int main()
{
    int arr[10];
    int data,size;
    cout<<"Entet size of an array";
    cin>>size;
    cout<<"Enter element in an array ";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<"Enter data you have to find ";
    cin>>data;
    int l=0,u=0;
    binary_search(l,u,data)
}
