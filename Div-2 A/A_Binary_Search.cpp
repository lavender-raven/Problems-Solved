#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
   ll n = 1 , k =1 ; 
   vector<ll> pookie(n);
   cin >> n >> k;

   for(ll i = 0 ; i < n ; i++)
   {
      ll temp = 0;
      cin >> temp;
      pookie.push_back(temp);
   }

   while(k--)
   {
      ll query = 0 ;
      cin >> query;
      ll  l = -1, r = n;
      while(r > (l+1))
      {
         ll mid = (l + r)/2;
         if ( pookie[mid] < query ) {l = mid;}
         else { r = mid;}
      }

      if(r < n &&  pookie[r] == query) cout << "YES" << endl;
      else cout << "NO" << endl;
   }

   return 0;
}
