class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n= strs.size();
        auto sample = strs[0];
        int currentminimum=sample.size();
        for(auto i:strs){
            int currentmatch=0;
            for(int j=0 ; j<min(sample.size(),i.size()); j++){
                if(i[j]==sample[j]){
                    currentmatch++;
                }
                else{
                    break;
                }
            }
            if(currentmatch<currentminimum){
                currentminimum=currentmatch;
            }
        }
        string stringlast;
        for(int i=0 ; i<currentminimum;i++){
            stringlast.push_back(sample[i]);
        }   

        return stringlast;

    }
};