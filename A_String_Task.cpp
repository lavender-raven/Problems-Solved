#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s ;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u' || s[i] == 'Y' || s[i] == 'y')
        {
            continue;
        }
        else
        {
            cout << "." ;
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                cout << (char)(s[i] + 32) ;
            }
            else
            {
                cout << s[i] ;
            }
        }
    }
}