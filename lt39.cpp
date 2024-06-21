class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> ransom;
        unordered_map<char,int> mangazine;
        bool check=true;
        if(ransomNote==" "){
            return true;
        }
        for(auto i:ransomNote){
            ransom[i]++;        
        }      
        for(auto j:magazine){
            mangazine[j]++;
        }
        for(auto& pair:ransom){
            if(mangazine[pair.first]>=pair.second){
                check= true;
            }
            else{
                check=false;
                break;
            }
        }

        if(check){
            return true;
        }
        else{
            return false;
        }
    }
};