class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0,r=0;
        while(l!=nums.size()&&r!=nums.size()){
            while(r<nums.size() && nums[r]==0) r++;
            if(r==nums.size()) break;
            swap(nums[r],nums[l]);
            l++;r++;
        }
    }
};