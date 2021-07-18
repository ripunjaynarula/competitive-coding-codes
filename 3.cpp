#include <iostream>
#include <cstring>
#include<string.h>
using namespace std;
 
int main()
{
    int n,count=0;
    int x,y,z;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x>>y>>z;
        if(x+y+z>=2){
            count++;
        }
       }
 
cout<<count;
    
}