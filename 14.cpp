#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    
    int n, m, arr[n], x[m], temp, count=0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x[i];
    }
    for (int p = 1; p < m; p++)
    {
        temp = x[p]-1;

        for (int i = temp+1; i < n; i++)
        {
            int j;
            for (j = temp; j < i; j++)
                if (arr[i] == arr[j])
                    break;

            if (i == j)
                count += 1;
        }
        cout << count<< endl;
        count=0;
    }
}