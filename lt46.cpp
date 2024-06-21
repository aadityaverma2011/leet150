class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,vector<int>> bind;
        for(int i=0;i<n;i++){
            if(bind[nums[i]].empty()){
                bind[nums[i]].push_back(i);
            }
            else{
                bind[nums[i]].push_back(i);
                int sum=0;
                int length=bind[nums[i]].size();
                sum = abs(bind[nums[i]][length-2]-bind[nums[i]][length-1]);
                if(sum<=k){
                    return true;
                }
                else{
                    continue;
                }

            }
        }

        return false;
    }
};