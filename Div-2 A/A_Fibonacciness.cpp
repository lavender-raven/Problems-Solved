#include <bits/stdc++.h>
using namespace std;


int fibonacciness(int a , int b, int c , int d , int e )
{
    int fib = 0;

    if( c == a + b ) fib += 1;
    if( d == b + c ) fib += 1;
    if( e == c + d ) fib += 1;

    return fib;
}


int max_fib( int a , int b, int d , int e )
{
    int c = -100;
    int ans = 0;
    for(;c<101;c++)
    {
        if (ans < fibonacciness(a,b,c,d,e))
        {
            ans = fibonacciness(a,b,c,d,e);
        }
    }
    return ans;
}


int main() {
    int n = 1;
    cin >> n;

    while(n--)
    {
        int a = 1, b = 1, c = 1, d = 1, e = 1;        
        cin >> a >> b >> d >> e;
        cout << max_fib(a,b,d,e) << endl;
       
    }
   
}

