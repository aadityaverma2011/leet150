class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        int c=1;
        for (int i = 1; i < nums.size(); i++)
        {
            if(nums[i]==nums[i-1] && c!=2){
                c++;
                nums[j]=nums[i];
                j++;
            }
            else if (nums[i]!=nums[i-1])
            {
                c=1;
                nums[j]=nums[i];
                j++;
            }
        }


        return j;
              
    }
};