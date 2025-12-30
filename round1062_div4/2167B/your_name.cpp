#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int n;
        cin >> n;

        string s,t;
        cin >> s >> t;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s == t)
        {
            cout << "YES" << "\n";
        }
        else 
        {
            cout << "NO" << "\n";
        }
    }
}
