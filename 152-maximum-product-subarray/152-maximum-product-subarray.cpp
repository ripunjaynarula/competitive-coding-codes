class Solution {
public:
    int maxProduct(vector<int>& arr) {
        
        int size=arr.size();
         int maxProduct = arr[0];
    int imax = arr[0];
    int imin = arr[0];
    for(int i=1 ;i<size;i++) {
        if(arr[i]<0) 
            swap(imax,imin);
        imax = max(arr[i], imax * arr[i]);
        imin = min(arr[i],imin * arr[i]);
        maxProduct = max(maxProduct, imax);
    }
    return maxProduct;
    }
};