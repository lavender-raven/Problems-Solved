#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , totalsum = 0 , halfsum , twin1sum = 0 , no_of_coins = 0;
    cin >> n;

    vector<int> v(n);
    for(int i = 0 ; i < n;i++)
    {
        cin >> v[i];
        totalsum += v[i];
    }
    sort(v.begin(),v.end());
    halfsum = totalsum / 2;
    for(int i = n-1 ; i >= 0 ; i--)
    {
        twin1sum += v[i];
        no_of_coins++;
        if(twin1sum > halfsum)
        {
            cout << no_of_coins << endl;
            return 0;
        }
    }
    
}