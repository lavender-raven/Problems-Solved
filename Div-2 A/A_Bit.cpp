#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
   int n = 1;
   cin >> n;

   int sol = 0;
   while(n--)
   {
      string s;
      cin >> s;

      for(int i = 0 ; i < 3 ; i ++)
      {
         if(s[i] == '-')
         {
            sol--;
            break;
         }
         if(s[i] == '+')
         {
            sol++;
            break;
         }
      }
   }
   cout << sol ;
   return 0;
}
