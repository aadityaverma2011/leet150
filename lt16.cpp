class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> leftarray(n);
        vector<int> rightarray(n);
        int max;
        max = height[0];
        for(int i=0 ; i<n ; i++){
            if(height[i]>max){
                max=height[i];
            }
            leftarray[i]=max;
        }
        max = height[n-1];
        for(int i=n-1 ; i>=0 ; i--){
            if(height[i]>max){
                max=height[i];
            }
            rightarray[i]=max;
        }
        int rainwatertrapped=0;
        for(int i=0; i<n;i++){
            rainwatertrapped= rainwatertrapped + (min(leftarray[i],rightarray[i])- height[i]);
        }

        return rainwatertrapped;
    }
};