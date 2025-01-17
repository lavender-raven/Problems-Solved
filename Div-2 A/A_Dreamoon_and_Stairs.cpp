#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n = 1 , m= 2; 
   cin >> n >> m;

   n = n+1;

   if ( (n - 1) < m)
   {
      cout << -1 << endl;
      return 0;
   }
   else if( m >= n/2)
   {
        cout << m << endl;
        return 0;
    }
     else
    {
        int b = 0 , i = 0;
        while(b < n/2)
        {
            b = m * i ;
            i++;
        }
        cout << b << endl;
        return 0;
    }

}
