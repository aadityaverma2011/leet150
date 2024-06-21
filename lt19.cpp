class Solution {
public:
    int lengthOfLastWord(string s) {
        bool wordstart=false;
        int length=0;
        int n=s.size();
        for(int i = n-1; i>=0 ; i-- ){
            if(s[i]==' ' && wordstart==false){
                continue;
            }
            if(s[i]==' ' && wordstart==true){
                break;
            }
            wordstart=true;
            length++;
        }
        return length;
    }
};