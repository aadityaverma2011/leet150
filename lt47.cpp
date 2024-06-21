class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());  
        int difference=0;
        int count=1;
        int maxcounttrack=0;
        if(nums.size()==1){
            return 1;
        }
        for(int i=1;i<n;i++){
            if(nums[i]-1==nums[i-1]){
                count++;
                maxcounttrack=max(maxcounttrack,count);
            }
            else if(nums[i]==nums[i-1]){
                count=count;
                maxcounttrack=max(maxcounttrack,count);
            }
            else{
                count=1;        
                maxcounttrack=max(maxcounttrack,count);
            }

        }
        return maxcounttrack;
    }
};