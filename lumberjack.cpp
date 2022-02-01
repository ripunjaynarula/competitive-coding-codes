
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int n;
long long arr[N];
long long m;

bool isWood(int h)
{

    long long wood = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= h)
        {
            wood += arr[i] - h;
        }
    }
    if (wood >= m)
    {
        return true;
    }
    else
        return false;
}
int main()
{

    cin >> n;

    cin >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long lo = 0, hi = 1e9, mid;
    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;
        if (isWood(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }

    if (isWood(hi))
    {
        cout << hi << endl;
    }
    else
    {
        cout << lo << endl;
    }
}
