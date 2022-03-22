class Solution {
public:
    int search(vector<int>& a, int t)
    {
        int l=0,r=a.size()-1;
        
        while(l<=r)
        {
            int mid=(l+r)/2;
            
            if(a[mid]==t)
                return mid;
            
            
            if(a[mid]<=a[r])                        //right part is sorted
            {
                if(t>=a[mid] && t<=a[r])
                    l=mid+1;
                else
                    r=mid-1;
            }
            else                                    //left part is sorted
            {
                if(t>=a[l] && t<=a[mid])
                    r=mid-1;
                else
                    l=mid+1;
            }
        }
        return -1;
    }
};