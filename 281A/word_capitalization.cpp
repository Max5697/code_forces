#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main()
{
    string N;
    cin >> N;

    if(isupper(N[0]) == 0)
    {
        N[0] = toupper(N[0]);
        cout << N;
    }
    else 
    {
        cout << N;
    }

}
