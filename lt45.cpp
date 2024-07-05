#include <unordered_set>
#include <cmath>

class Solution {
public:
    bool isHappy(int n) {
        int sum = n;
        std::unordered_set<int> bind;
        int backupsum = 0;
        while(sum!=1){
            if(bind.find(sum)!=bind.end()){
                return false;
            }
            bind.insert(sum);
            backupsum=0;
           while(sum>0){
            int digit=sum%10;
            backupsum+=digit*digit;
            sum=sum/10;
           }
           sum=backupsum;
        }

        return true;

    }
};
