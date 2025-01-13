#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int min = INT_MAX;
    for (int i = 0; i <= m - n; i++)
    {
        if (v[i + n - 1] - v[i] < min)
        {
            min = v[i + n - 1] - v[i];
        }
    }
    cout << min;
    return 0;
}