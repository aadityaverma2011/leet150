#include <vector>

class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int index = 0;
        int value = nums[0];
        
        if (index == nums.size() - 1) {
            return true;
        }
        
        while (index < nums.size() && value != 0) {
            index = index + value;
            
            if (index >= nums.size() - 1) {
                return true;
            }
            
            value = nums[index];
            
            if (value == 0 && index != nums.size() - 1) {
                return false;
            }
        }
        
        return false;
    }
};
