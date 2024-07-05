class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        if(n==1){
            return intervals;
        }
        vector<vector<int>> result;
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

        return result;
    }
};