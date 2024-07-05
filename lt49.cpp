class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int interval=intervals[0].size();
        vector<int> temp;
        vector<vector<int>>result;
        if(n==1){
            return intervals;
        }
        else{
            sort(intervals.begin(),intervals.end());
            int i=0;
            while(i<n){
                int start= intervals[i][0];
                int end= intervals[i][1];
                while(i+1<n && end>=intervals[i+1][0]){
                    end=max(end,intervals[i+1][1]);
                    i++;
                }
                result.push_back({start,end});
                i++;
            }
        }
        return result;
    }
};