#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i=0;i < n; i++)
        {
            cin >> a[i];
        }

        bool has_even = false;
        bool has_odd = false;

        for(int x : a)
        {
            if(x % 2 == 0) has_even = true;
            else has_odd = true;
        }

        if(has_even && has_odd)
        {
            sort(a.begin(), a.end());
            for(int i=0; i<n; i++) cout << a[i] << " "; 
        } else {
            for(int i=0; i<n; i++) cout << a[i] << " ";
        }
        cout << "\n"; 
    }
}
