#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    string str;

    cout<<"Enter the number and the string ";
    cin>>x;
    getline(cin, str);
    cout<<"you have entered  ";
    cout<<x<<endl;
    cout<<str<<endl;

    cout<<"you will not see the output of the string as When we press enter key,"
    <<" it skips the getLine() function without taking any input. So to resolve this issue we will use cin.ignore()"<<endl;

    cout << "Again enter a number and a string:\n";
   cin >> x;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   getline(cin,str);
   cout << "You have entered:\n";
   cout << x << endl;
   cout << str << endl;

    return 0;
}