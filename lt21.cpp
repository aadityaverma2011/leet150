class Solution {
public:
    string reverseWords(string s) {
        string reverse;
        string finall;
        int n=s.size();
        bool wordstart=false;
        for(int i=n-1 ; i>=0 ; i--){
            if(s[i]==' ' &&wordstart==false){
               continue;
            }
            if(s[i]==' ' &&wordstart==true){
                wordstart=false;
                for(int j=reverse.size()-1; j>=0 ; j--){
                    finall.push_back(reverse[j]);
                }
                finall.push_back(' ');
                reverse.clear();
                continue;
            }
            wordstart=true;
            reverse.push_back(s[i]);


        }
        if (!reverse.empty()) {
            for (int j = reverse.size() - 1; j >= 0; j--) {
                finall.push_back(reverse[j]);
            }
        }
        if(!finall.empty() && finall.back()==' '){
            finall.pop_back();
        }
        return finall;
    }
};