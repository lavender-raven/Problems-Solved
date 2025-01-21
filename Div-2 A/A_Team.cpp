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
      int counter = 0 ;
      vector<int> pookie(3);
      for(int i = 0; i<3 ; i++)
      { 
         cin >> pookie[i];
         if(pookie[i] == 1 )
         {
            counter += 1;
         }
      }
      if (counter >= 2) { sol++; }
   }

   cout << sol << endl;
   return 0 ;
}
