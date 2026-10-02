class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> windows;    
        for(int l=0;l<nums.size();l++){
            if(l>k){
                windows.erase(nums[l-k-1]);
            }
            if(windows.count(nums[l])){
                return true;
            }
            windows.insert(nums[l]);
        }
        return false;
    }
};