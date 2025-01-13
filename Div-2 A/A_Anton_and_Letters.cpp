#include <bits/stdc++.h>
using namespace std;

int main()
{
 string s , temp;
 getline(cin , s);

 for(int i = 0 ; i < s.size() ; i++)
 {
    if(s[i] >= 'a' && s[i] <= 'z')
    {
      temp.push_back(s[i]);
    }
 }

    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());
    cout << temp.size() << endl;
    return 0;
    
}