class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n= numbers.size();
        int l=0;
        int r=n-1;
        int total;
        vector<int>result(2);
        while(l<r){
            total=numbers[l]+numbers[r];
            if(total>target){
                r--;
            }
            else if(total<target){
                l++;
            }
            if(total==target){
                break;
            }
        }

        result[0]=l+1;
        result[1]=r+1;

        return result;
    }
};