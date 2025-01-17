#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n = 1, k = 1;
    cin >> n >> k;

    long long mid = (n+1)/2;

    if(k <= mid)
    {
        cout << (2*k)-1 << endl;
    }
    else
    {
       cout << (k - mid) * 2 << endl;
    }
}
