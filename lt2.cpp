
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k;
        auto it = nums.begin();
        while(it != nums.end()){
            if(*it==val){
                it=nums.erase(it);
            }
            else{
                it++;
            }
        }
        k=nums.size();










        return k;      
    }
};