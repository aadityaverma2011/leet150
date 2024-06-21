class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums,nums+nums.size());
        return nums[(nums.size())/2];
    }
};