    //{ Driver Code Starts
    #include <bits/stdc++.h>
    using namespace std;


    // } Driver Code Ends
    class Solution {
    public:
        int minimumEnergy(vector<int>& height, int n) {
            vector<int> dp (n+1,-1);
            dp[0]=0;
            dp[1]=0;
            for(int i==2 ; i<n+1;i++){
                dp[i]= abs(height[i-1]-height[i-2]);
            }
            for(int i=4; i<=n;i++){
                dp[i]= min(dp[i-1],dp[i-2]);
            }
            return dp[n];
            
        }
    }