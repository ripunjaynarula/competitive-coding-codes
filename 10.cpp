#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main(){
    double r,rtemp,temp,res,d=0;
    int n,l;
    cin>>n>>l;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    
    sort(x,x+n);

    for(int i=0;i<n-1;i++){
        
        temp=x[i+1]-x[i];
        if(temp>d){
            d=temp;
        }
    }
    if(x[0]!=0){
        rtemp=x[0];
    }
    if(x[n-1]!=l){
        res=l-x[n-1];
        if(res>rtemp){
            rtemp=res;
        }
    }
    if(d<(rtemp*2)){
    r=rtemp;}
    else{
        r=d/2;
    }
    cout<< fixed << setprecision(9)<<r;
}