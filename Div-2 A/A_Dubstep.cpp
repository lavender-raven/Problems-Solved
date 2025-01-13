#include <iostream>
using namespace std;

int main()
{
    string s , ans;
    cin >> s;

    

    for (int i = 0 ; i < s.size(); i++ )
    {
        if ( s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B' )
        {
            i += 2;
            ans.push_back(' ');
        }
        else
        {
            ans.push_back(s[i]);
        }
    }

    for (int i = 0 ; i < ans.size(); i++)
    {
        if ( ans[i] == ' ' && ans[i+1] == ' ' )
        {
            ans.erase(i,1);
            i--;
        }
    }

    cout << ans << endl;
}