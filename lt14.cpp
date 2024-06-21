class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int totalsurplus=0;
        int surplus =0;
        int start=0;
        for(int i=0;i<n;i++){
            totalsurplus+=gas[i]-cost[i]; 
            surplus+=gas[i]-cost[i]; 
            if(surplus<0){
                surplus=0;
                start=i+1;
            }
        }
        if(totalsurplus<0){
            return -1;
        }
        else{
            return start;
        }
    }
};

// gas [5,1,2,3,4]
// cost[4,4,1,5,1]