#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n;
    cin >>n;
    
    int swaps = 0;
    int min = INT_MAX;
    int max = INT_MIN;
    int minIndex = 0;
    int maxIndex = 0;

    vector<int> soilders(n);

    for(int i = 0; i<n ; i++)
    {
        cin >> soilders[i];
        if(soilders[i] > max)
        {
            max = soilders[i];
            maxIndex = i;
        }
        if(soilders[i] <= min)
        {
            min = soilders[i];
            minIndex = i;
        }
    }

    if(minIndex < maxIndex)
    {
        swaps = maxIndex + (n-1-minIndex) - 1;
    }
    else
    {
        swaps = maxIndex + (n-1-minIndex);
    }

    cout << swaps << endl;
    return 0 ;
}