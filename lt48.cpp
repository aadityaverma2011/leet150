class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        string stringy;
        vector<string> result;
        for(int i=0;i<n;i++){
            int start = nums[i];
            while(i+1<n && nums[i+1]==nums[i]+1){
                i++;
            }
            if(start!=nums[i]){
                stringy.append(to_string(start));
                stringy.append("->");
                stringy.append(to_string(nums[i]));
                result.push_back(stringy);
                stringy.clear();
               
            }else{
                stringy.append(to_string(start));
                result.push_back(stringy);
                stringy.clear();
            }

        }

        return result;
    }
};