class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> bind;
        unordered_map<string,int>check;
        vector<string> holder;
        string result;
        int n=s.size();
        //counting words in string s
        int wordcount=0;
        bool outsideword=true;
        for(int i=0 ; i<n ;i++){
            if(s[i]==' ' ){
                outsideword=true;
                holder.push_back(result);
                result.clear();
            }
            if(s[i]!=' '  && outsideword==true){
                outsideword=false;
                wordcount++;
            }
            if(outsideword==false){
                result.push_back(s[i]);
            }
        }
        holder.push_back(result);
        if(wordcount!=pattern.size()){
            return false;
        }
        else{
            int m=pattern.size();
            int count=0;
            bool match=true;
            for(int i=0 ;i<m;i++){
                if(bind[pattern[i]]=="\0"){
                    if(check[holder[i]]!=1){
                        match=true;
                        bind[pattern[i]]=holder[i];
                        check[holder[i]]=1;
                    }
                    else{
                        match=false;
                        break;
                    }
                }
                else{
                    if(bind[pattern[i]]!=holder[i]){
                        match=false;
                        break;
                    }
                    else{
                        match=true;
                        continue;
                    }
                }
            }
            if(match==true){
                return true;
            }
            else{
                return false;
            }













        }
    }
};