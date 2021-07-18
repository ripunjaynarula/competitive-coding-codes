#include<iostream>
using namespace std;
#include<string>
int main(){
    int arr[50],n,k,flag=0;
    cin>>n>>k;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
        flag++;}
    }
    cout<<flag;
}