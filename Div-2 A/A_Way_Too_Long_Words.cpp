#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
    cin >> n;
	while (n--)
	{
		string c;
		cin >> c;
		if(c.size() > 10 )
		{
			cout << c[0] << c.size() -  2 << c[c.size()-1];
		}
		else
		{
			cout << c;
		}
        cout << endl;
	}
}