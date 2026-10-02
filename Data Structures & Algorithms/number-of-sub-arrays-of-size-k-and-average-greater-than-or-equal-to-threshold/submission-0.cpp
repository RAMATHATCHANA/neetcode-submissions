class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int narr=0,sum=0;
        int tsum = k*threshold;
        for(int i=0;i<k;i++) sum+=arr[i];
        if(sum>=tsum) narr++;
        for(int r=k;r<arr.size();r++){
            sum+=arr[r];
            sum-=arr[r-k];
            if(sum>=tsum) narr++;
        }
        return narr;
    }
};