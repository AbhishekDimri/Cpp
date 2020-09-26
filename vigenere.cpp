#include<bits/stdc++.h>

using namespace std;

int main()
{
    string key,message,encrypt;
     int k=0,m,i,f=1;
     cout<<"Enter the message to encrypt : ";

    getline(cin,message);

   m=message.length();

    cout<<"Enter the key : ";
    cin>>key;

   while(key[k]!='\0')
   {
       k++;
   }
   for(i=0;i<k;i++)
   {
       key[i]=toupper(key[i]);
   }


    for(i=0;i<m;i++)
   {
       message[i]=toupper(message[i]);
   }

   int a[m],j=0,n=1;



   for(int i=0;i<m;i++)
   {
       if(i<k)
       {
           a[i]=(int)(key[i])-64;

       }
       else
       {
             if(key[i-k*n]=='\0')
       {
           n++;
       }
          a[i]=(int)(key[i-n*k])-64;


       }

   }
   cout<<endl;


   for(int i=0;i<m;i++)
   {
       if(message[i]!=' ')
       {
           if((int)(message[i])+a[j]<=90)
           {

             encrypt[i]=(char)((int)(message[i])+a[j]);
             j++;

           }
           else
           {
              encrypt[i]=(char)(((int)(message[i])+a[j]-26));
              j++;

           }
       }
       else
       {
           encrypt[i]=message[i];
        }
    }
      cout<<"encrypted code is :";
     for(int i=0;i<m;i++)
   {
       cout<<encrypt[i];
   }
   cout<<endl;
}

