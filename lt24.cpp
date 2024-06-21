class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        string temporaryline;
        temporaryline.append(words[0]);
        vector<string> result;
        int spaceleft=maxWidth-words[0].size();
        for(int i=1 ; i<words.size();i++){
            if(words[i].size()+1<=spaceleft){
                    temporaryline.append(" " + words[i]);
                     spaceleft -= (words[i].size() + 1);
            }
            else{
                
                result.push_back(temporaryline);
                temporaryline=words[i];
                spaceleft=maxWidth-words[i].size();
            }
        }
        result.push_back(temporaryline);

        return result;
    }
};

