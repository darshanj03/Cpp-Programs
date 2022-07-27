#include<iostream>
using namespace std;

struct Time{
    int hour;
    int min;
    int sec;
};

void Difference(Time t1, Time t2){
    Time diff;
    
    if(t1.sec > t2.sec){
        t2.sec += 60;
        --t2.min;
    }
    if(t1.min > t2.min){
        t2.min += 60;
        --t2.hour;
    }
    
    diff.sec = t2.sec - t1.sec;
    diff.min = t2.min -t1.min;
    diff.hour = t2.hour - t1.hour;

    
    cout<<diff.hour<<"h "<<diff.min<<"m "<<diff.sec<<"s ";
}

int main() {
    Time t1, t2;
    
    cout<<"Enter the time-1 (h:m:s): ";
    cin>>t1.hour>>t1.min>>t1.sec;
    
    cout<<"Enter the time-2 (h:m:s): ";
    cin>>t2.hour>>t2.min>>t2.sec;
    
    Difference(t1, t2);
    
    return 0;
}