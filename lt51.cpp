class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        if(n==1){
            return 1;
        }
        sort(points.begin(),points.end());
        int i=0;
        int arrowcount=0;
        while(i<n){
            int balreachable=points[i][1];
            while(i+1<n && balreachable>=points[i+1][0]){
                i++;
                balreachable=min(balreachable,points[i][1]);
            }
            arrowcount++;
            i++;

        }
        return arrowcount;
    }
};