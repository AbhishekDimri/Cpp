#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int data,n;
    cout<<"enter size of an array ";
    cin>>n;
    cout<<"enter data in an array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"which element you have to find ";
    cin>>data;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==data)

        {
            cout<<arr[i]<<ends<<i+1<<endl<<"data found sucessfully ";
        }
    }
}
