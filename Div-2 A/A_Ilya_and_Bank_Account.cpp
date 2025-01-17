#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long bank_bal = 0;
    cin >> bank_bal;

    if(bank_bal >= 0 )
    {
        cout << bank_bal;
    }
    else
    {
        long long last_digit = bank_bal % 10;
        long long second_last_digit = (bank_bal / 10) % 10;
        if(last_digit < second_last_digit)
        {
            cout << bank_bal / 10;
        }
        else
        {
            cout << (bank_bal / 100) * 10 + last_digit;
        }
    }
    return 0;
}