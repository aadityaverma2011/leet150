class Solution {
public:
    int jump(vector<int>& nums) {
        int reachable=0 ;
        int jumps=0;
        int lastjumpedindex=0;
        int destination = nums.size()-1;
        if(nums.size()==1){
            return 0;
        }
        for(int i =0 ; i<nums.size(); i ++){
            reachable = max(reachable,i+nums[i]);
            if(lastjumpedindex==i){
                lastjumpedindex=reachable;
                jumps++;
                if(reachable>=destination){
                return jumps;
            }
            }
            
        }
        return jumps;
        
    }
};