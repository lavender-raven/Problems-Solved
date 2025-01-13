#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q;
    cin >> n;
    cin >> p;
    int arr[n] = {0};
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        arr[x - 1] = 1;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        arr[x - 1] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;

}