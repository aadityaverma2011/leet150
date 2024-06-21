class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k;
        auto it = nums.begin();
        while(it !=nums.end()-1){
                if(*it==*(it+1)){
                    it=nums.erase(it)-1;
                }
                it++;
        }

        k=nums.size();







        return k;
    }
};