#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{ int n,m,count=0;
 n=10;
 m=10;
int arr[]={1,2,3,4,5,6,7,8,9,0};
        for (int i =1; i < n; i++)
        {
            int j;
            for (j = 0; j < i; j++)
                if (arr[i] == arr[j])
                    break;

            if (i == j)
                count += 1;
        }
        cout << count<< endl;
    
}