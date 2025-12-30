#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long result = 0;
    vector<long long>a(n);
    vector<long long>b(n);
    vector<long long>c(n);
    vector<long long>d(n);

    for(long long i=0; i<n; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i] == b[i] && b[i] == c[i] && c[i] == d[i])
        {
            cout << "YES" << "\n";
        }
        else 
        {
            cout << "NO" << "\n";
        }
    }
}
