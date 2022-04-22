class Solution {
public:
    int tribonacci(int n) {
            int ans = 0;
    int a = 0;
    int b = 1;
    int c = 1;
    
    if( n == 1 || n==2)
        return 1;
    
    for( int count = 2; count < n; count ++)
    {
        ans = a + b + c;
        
        a = b;
        b=c;
        c = ans;
    }
    return ans;

    }
};