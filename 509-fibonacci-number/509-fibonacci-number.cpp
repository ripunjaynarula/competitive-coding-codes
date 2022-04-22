class Solution {
public:
    int fib(int n) {
    int ans = 0;
    int a = 0;
    int b = 1;
    
    if( n == 1)
        return 1;
    
    for( int count = 1; count < n; count ++)
    {
        ans = a + b;
        a = b;
        b = ans;
    }
    return ans;
}
    };
