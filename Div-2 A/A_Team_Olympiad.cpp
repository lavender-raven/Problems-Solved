#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b, c, d;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            b.push_back(i + 1);
        else if (a[i] == 2)
            c.push_back(i + 1);
        else
            d.push_back(i + 1);
    }
    int x = min(b.size(), min(c.size(), d.size()));
    cout << x << endl;
    for (int i = 0; i < x; i++)
    {
        cout << b[i] << " " << c[i] << " " << d[i] << endl;
    }
    return 0;
}