class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int r=0;
        int sum=0;
        bool targetbreached=false;
        int windowlength=INT_MAX;
        int n=nums.size();
        while(r<n){
            sum=sum+nums[r];
            while(sum>=target){
                targetbreached=true;
                windowlength=min(r-l,windowlength);
                sum=sum-nums[l];
                l++;
            }
            r++;
        }

        if(!targetbreached){
            return 0;
        }
        else{
            return windowlength;
        }
    }
};