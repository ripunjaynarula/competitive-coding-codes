#include<iostream>
#include<string>
using namespace std;
int main(){

    int n, sum=0,temp,count=0,x=0;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-i-1;j++){

            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
    while(sum>=x){
        x+=arr[n-1];
        sum-=arr[n-1];
        count++;
        n--;
    }
cout<<count;


}