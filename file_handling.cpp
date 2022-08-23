#include <iostream>
using namespace std;

int main()
{
    register int a = 10;
    int *p = &a;
    cout << *p;

    return 0;
}