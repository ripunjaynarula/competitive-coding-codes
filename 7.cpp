#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s;
 
    cin>>s;
 
    if (s.size()<7)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        int count=0, max_count=0;
 
        for(int i=1; i<s.size(); i++){
            if (s[i-1]==s[i])
            {
                count++;
            }
            else 
                count = 0;
 
        if (max_count<count+1)
        {
            max_count= count+1;    
        }
 
        }
 
        if (max_count<7)
        {
            cout<<"NO"<<endl;
        }
        else    {
 
            cout<<"YES"<<endl;
        }
    }
 
 
    return 0;
}