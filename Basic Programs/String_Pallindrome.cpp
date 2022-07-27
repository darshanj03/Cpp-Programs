#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "racecar";
    int flag = 0;
    int len = str.length();
    for (int i = 0, j = len - 1; i <= (len / 2), j >= (len / 2); i++, j--)
    {
        if (str[i] == str[j])
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        cout << "Pallindrome";
    else
        cout << "not a pallindrome";
    return 0;
}