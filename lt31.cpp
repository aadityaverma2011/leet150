class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int n=s.size();
        int l=0;
        int r=0;
        int maxwindowlength=0;
        while(r<n){
            if(m[s[r]]==0){
                m[s[r]]++;
                maxwindowlength=max(maxwindowlength,r-l+1);
            }
            else{
                while(m[s[r]]!=0){
                    m[s[l]]--;
                    l++;
                }
                m[s[r]]++;
                
            }
            
            
            r++;
        }
        return maxwindowlength;
    }
};