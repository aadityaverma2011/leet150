class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n=nums.size();
        int l,r;
        for(int i=0; i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            l=i+1;
            r=n-1;
            while(l<n){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==0){
                    result.push_back({nums[i],nums[l],nums[r]});
                    while(l<r &&nums[l]==nums[l+1]){
                        l++;
                    }
                    while(l<r && nums[r]==nums[r-1]){
                        r--;
                    }
                    l++;
                    r--;
                    break;
                }
                if(sum<0){
                    l++;
                }
                if(sum>0){
                    r--;
                }

            }

        }  
        return result;    
    }
};