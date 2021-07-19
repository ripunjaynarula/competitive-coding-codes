#include<iostream>
using namespace std;
#include <string>
int main(){

    int n,x=0;
    string s;
    cin>>n;
    for (int i=0;i<n;i++){
        
        cin>>s;
        if(s[1]=='+'){
            x+=1;
        }
        else{
            x-=1;
        }

    }
    cout<<x;

}