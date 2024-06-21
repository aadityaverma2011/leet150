class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int n=height.size();
        int l=0;
        int r=n-1;
        int breadth=r-l;
        while(l<r){
            breadth=r-l;
            int temparea=breadth*min(height[l],height[r]);
            area=max(temparea,area);
            if(height[l]<height[r]){
                l++;
            }
            else if(height[l]>height[r]){
                r--;
            }
            else{
                r--;
            }
        }


        return area;
    }
};