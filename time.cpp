#include<bits/stdc++.h>

using namespace std;


class time
{
    int hours,minutes;
public:

    void settime(int a,int b)
    {
        hours=a;
        minutes=b;
    }
    time sum(time tm)
    {
        time t;
        t.minutes = minutes + tm.minutes;
        t.hours=t.minutes/60;
        t.minutes=t.minutes%60;
        t.hours+=hours+tm.hours;

        return t;
    }

    void showtime()
    {
        cout<<hours<<" : "<<minutes<<endl;
    }
}t1,t2,t3;

int main()
{
    t1.settime(3,45);
    t2.settime(11,23);
    t3=t1.sum(t2);
    cout<<"\n time 1 =>";
    t1.showtime();
    cout<<"\n time 2 =>";
    t2.showtime();
    cout<<"\n time 3=>";
    t3.showtime();
}
