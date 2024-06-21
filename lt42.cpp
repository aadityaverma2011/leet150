class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        } 
        else{
            int n=s.size();
            unordered_map<char,int> bind;
            for(int i=0;i<n;i++){
                bind[s[i]]++;
            }
            for(int i=0;i<n;i++){
                bind[t[i]]--;
            }
            bool breakitoff=false;
            for(auto pair:bind){
                if(pair.second!=0){
                    breakitoff=true;
                    break;
                }
            }
            if(breakitoff){
                return false;
            }
            else{
                return true;
            }

            
        }
    }
};