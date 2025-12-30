#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string number = "";

    for(int i = 0; i < s.length(); i += 2)
    {
        number += s[i];
    }
    sort(number.begin(), number.end());
    for (int i =0; i < number.length(); i++)
    {
        cout << number[i];

        if(i < number.length() - 1)
        {
            cout << "+";
        }
    }
}
