class Solution {
public:
    void allsubset(int ind,vector<int>&buffer,vector<int>&nums,int size,vector<vector<int>>&result){
        if(ind==size){
            result.push_back(buffer);
            return;
        }
        buffer.push_back(nums[ind]);
        allsubset(ind+1,buffer,nums,size,result);
        buffer.pop_back();
        allsubset(ind+1,buffer,nums,size,result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n= nums.size();
        vector<int>buffer;
        vector<vector<int>>result;
        allsubset(0,buffer,nums,n,result);
        return result;

    }
};