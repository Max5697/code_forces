#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if(cin >> t)
    {
        while(t--)
        {
            int n;
            cin >> n;

            string current_s = "";

            for(int i=0;i<n;i++)
            {
                string s;
                cin >> s;

                if(i == 0)
                {
                    current_s = s;
                }
                else 
                {
                    string option1 = s + current_s;
                    string opting2 = current_s + s;

                    if(option1 < opting2) current_s = option1;
                    else current_s = opting2;
                }
            }
            cout << current_s << "\n";
        }
    }
}
