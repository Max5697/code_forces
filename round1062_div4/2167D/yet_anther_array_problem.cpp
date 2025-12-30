#include <iostream>
#include <vector>
#include <numeric>

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
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int ans = -1;

        for(int x=2; ;x++)
        {
            bool found = false;

            for(int i=0; i<n; i++)
            {
                if(gcd(a[i], x) == 1)
                {
                    found = true;
                    break;
                }
            }

            if(found)
            {
                ans = x;
                break;
            }
        }
        cout << ans << "\n";
    }
}
