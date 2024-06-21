class Solution {
public:
    int strStr(string haystack, string needle) {
        bool matching=false;
        int matchindex=0;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0]){
                matching=true;
                matchindex=i;
                for(int j =1 ; j<needle.size();j++){
                    if(haystack[i+j]!=needle[j]){
                        matching=false;
                        break;
                    }
                }
                if(matching){
                    break;
                }
            }
        }
        if(!matching){
            return -1;
        }
        else{
            return matchindex;
        }
    }
};