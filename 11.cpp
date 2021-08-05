#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t, n, x, a[1000], sum = 0, temp, r, factorial, flag = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        cin >> n >> x;
        factorial = n;
        for (int j = 0; j < n; j++)
        {
            cin >> a[i];
        }

        for (int j = n - 1; j > 0; j--)
        {
            factorial = factorial * j;
        }
        for (int j = 0; j < factorial; j++)
        {
            for (int j = 0; j < x; j++)
            {
                r = rand() % n + 1;
                temp = a[r - 1];
                sum = sum + temp;

                if (sum % 2 != 0)
                {
                    flag = 1;
                    exit;
                }
            
            else
            {
                continue;
            }
        }}

        if (flag != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}