#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a= 0,b =0,c = 0;
    cin >> a >> b >> c;

    int array[8] = {a+b+c, a+b*c, a*b+c, a*b*c, (a+b)*c, a*(b+c), a*(b*c), a+b*c};
    int max = INT_MIN;

    for (int i = 0; i < 8; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << max;
    return 0;
}