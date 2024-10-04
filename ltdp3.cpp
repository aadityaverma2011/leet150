class Solution {
public:
    //top down approach 
    int maxmoney(int ind,vector<int>&nums,vector<int>&dp){
        if(ind==0){
            return nums[ind];
        }
        if(ind==1){
            return max(nums[0],nums[1]);
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        if(ind<0){
            return 0;
        }
        int pick = nums[ind]+maxmoney(ind-2,nums,dp);
        int notpick= 0 + maxmoney(ind-1,nums,dp);
        int returnvalue= max(pick,notpick);
       dp[ind]=returnvalue;
       return returnvalue;

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        vector<int>temp;
        for(int i=1;i<n;i++){
            temp.push_back(nums[i]);
        }
        vector<int>temp2;
        for(int i=0;i<n-1;i++){
            temp2.push_back(nums[i]);
        }
        int newret= maxmoney(n-2,temp,dp);
        vector<int>dp2(n,-1);
        int retu=maxmoney(n-2,temp2,dp2);
        return max(newret,retu);

        
    }
};