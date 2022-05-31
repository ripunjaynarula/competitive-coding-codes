class Solution {
public:
    
void merge(vector<int> &arr, int low, int mid, int high, int &cnt)
{

       int l = low, r = mid + 1;
        while(l <= mid && r <= high){
            if((long)arr[l] > (long) 2 * arr[r]){
                cnt += (mid - l + 1);
                r++;
            }else{
                l++;
            }
        }
 sort(arr.begin()+low, arr.begin()+high+1 );
}

void mergeSort(vector<int> &arr, int low, int high, int &cnt)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid, cnt);
        mergeSort(arr, mid + 1, high,cnt);

        merge(arr, low, mid, high, cnt);
    }
}
    
int reversePairs(vector<int>& arr) {
    int cnt = 0;
    mergeSort(arr, 0, arr.size() - 1, cnt);
    return cnt;
}

};