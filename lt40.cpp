class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }      
        bool matching=true;
        unordered_map<char,char> bind;
        unordered_map<char,int> check;
        int n=s.size();
        for(int i=0 ; i<n ; i++){
            if(bind[s[i]]!='\0'){
                if(bind[s[i]]!=t[i]){
                    matching=false;
                    break;
                }
                else{
                    matching=true;
                    continue;
                }
                
            }
            else{
                if(check[t[i]]==1){
                    matching=false;
                    break;
                }
                matching=true;

                bind[s[i]]=t[i];
                check[t[i]]=1;
            }

        }

        if(matching){
            return true;
        }
        else{
            return false;
        }
    }
};