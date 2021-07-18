#include<iostream>
#include <string>
using namespace std;

int main(){
    int n,i,j,k;
    string x;
    cin>>n;
    for (i=0;i<n;i++){

        cin>>x;
      
    

        k=x.length();
        if(k>10){
            cout<<x[0]<<k-2<<x[k-1]<<endl;

        }
        else{
            cout<<x<<endl;
        }
        
      
    }
    
}