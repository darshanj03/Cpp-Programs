#include<iostream>
#include<string>
using namespace std;

struct Student {
    string name;
    int age;
    string usn;
};

int main() {
    Student s[3];
    
    for(int i = 0; i < 3; i++){
        cout<<"Enter the details of student "<<i<<endl;
        cout<<"Enter name : ";
        cin>>s[i].name;
        cout<<"Enter age : ";
        cin>>s[i].age;
        cout<<"Enter USN : ";
        cin>>s[i].usn;
    }
    
    for(int i = 0; i < 3; i++){
        cout<<"Student "<<i<<endl;
        cout<<"Name : "<<s[i].name<<endl;
        cout<<"Age : "<<s[i].age<<endl;
        cout<<"USN : "<<s[i].usn<<endl;
        cout<<" ";
    }
    
    return 0;
}