#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p;
    cin >> p;

    set<int> pass_level;
    for(int i=0; i<p; i++)
    {
        int level;
        cin >> level;
        pass_level.insert(level);
    }

    int q;
    cin >> q;

    for(int i=0; i<q; i++)
    {
        int level;
        cin >> level;
        pass_level.insert(level);
    }

    if(pass_level.size() == n)
    {
        cout << "I become the guy.";
    }
    else {
        cout << "Oh, my keyboard!";
    }
}
