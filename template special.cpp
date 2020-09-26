#include<bits/stdc++.h>

using namespace std;

template<class t>

class charfinder
{
public:
    charfinder(t a)
    {
        cout<<a<<" is other type\n";
    }
};

template<>
class charfinder<char>    //specialization class template
{
public:
    charfinder(char a)
    {
        cout<<a<<" is a valid char type\n";
    }
};

template<>
class charfinder<int>    //specialization class template
{
public:
    charfinder(int a)
    {
        cout<<a<<" is int type\n";
    }
};

template<>
class charfinder<string>    //specialization class template
{
public:
    charfinder(string a)
    {
        cout<<a<<" is string\n";
    }
};

int main()
{
    charfinder<char> c('A');
    charfinder<int>  c1(123);
    charfinder<float>  c2(123.234);
    charfinder<string>  c3("Abhishek");
}
