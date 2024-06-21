class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> nums2;
        while(k-- && nums.size()){
            int lastelement= nums.back();
            nums2.push_back(lastelement);
            nums.pop_back();
            
        }
        for(int i=0;i<nums2.size();i++){
            nums.insert(nums.begin(),nums2[i]);
        }
    }
};