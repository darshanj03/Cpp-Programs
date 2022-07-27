#include <iostream>
#include<string>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

void sum(Distance d1, Distance d2) {
    int feet;
    float sum = d1.inch+d2.inch;
    feet = d1.feet+d2.feet;
    if(sum > 12){
        sum = sum - 12;
        feet++;
    }
    cout<<"Distance : "<<feet<<" feet"<<" "<<sum<<" inch\n";
}

int main(){
    Distance d1, d2;
    
    cout<<"Enter the distance 1 : ";
    cin>>d1.feet>>d1.inch;
    cout<<"Enter the distance 2 : ";
    cin>>d2.feet>>d2.inch;
    
    cout<<"Distance 1 : "<<d1.feet<<" feet"<<" "<<d1.inch<<" inch\n";
    cout<<"Distance 2 : "<<d2.feet<<" feet"<<" "<<d2.inch<<" inch\n";
    
    sum(d1, d2);
    
}