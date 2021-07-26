#include<iostream>
#include<string>
using namespace std;
int main(){
    int flag=0;
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){

        if(s[i]=='H' || s[i]=='Q'|| s[i]=='9'){
            flag+=1;
        }
        

    }
    if(flag>0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}