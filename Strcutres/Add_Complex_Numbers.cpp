#include<iostream>
#include<cmath>
using namespace std;

struct Sum {
    float real;
    float imag;
};

void Add(Sum num1, Sum num2){
    float real_sum = num1.real + num2.real;
    float imag_sum = num1.imag + num2.imag;
    char op;
    if(imag_sum<0)
        op = '-';
    else
        op = '+';
    
    cout<<"Result : "<<real_sum<<" "<<op<<" "<<abs(imag_sum)<<"i";
}

int main() {
    Sum num1, num2;
    
    cout<<"Enter the first number : ";
    cin>>num1.real>>num1.imag;
    cout<<"Enter the second number : ";
    cin>>num2.real>>num2.imag;
    
    cout<<"You have entered : "<<endl;
    cout<<"Number 1 : "<<num1.real<<"+"<<"("<<num1.imag<<")i"<<endl;
    cout<<"Number 2 : "<<num2.real<<"+"<<"("<<num2.imag<<")i"<<endl;
    
    Add(num1, num2);
    return 0;
}