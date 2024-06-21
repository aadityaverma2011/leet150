class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> bind;
        int n=nums.size();
        for(int i=0; i<n;i++){
            bind[nums[i]]=i;
        }
        int i=0;
        int j=n-1;
        vector<int>backup=nums;
        vector<int>result;
        sort(nums.begin(),nums.end());
        int sum=nums[i]+nums[j];
        while(sum!=target){
            if(sum>target){
                j--;
            }
            if(sum<target){
                i++;
            }
            sum=nums[i]+nums[j];
        }
        if(nums[i]==nums[j]){
            int count=1;
            int temptarget=nums[i];
            for(int i=0;i<n;i++){
                if(count==1 && temptarget==backup[i]){
                    count--;
                    result.push_back(i);
                    continue;
                }
                if(count==0 && temptarget==backup[i]){
                    count--;
                    result.push_back(i);
                    break;
                }
            }
            return result;
        }
        
        result.push_back(bind[nums[i]]);
        result.push_back(bind[nums[j]]);
        return result;

    }
};