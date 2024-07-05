class Solution {
public:
    string simplifyPath(string path) {
        int n=path.size();
        stack<string> seedha;
        string temp;
        for(int i=0 ; i<n ; i++){
            while(i<n && path[i]!='/'){
                temp.push_back(path[i]);
                i++;
            }
            if(!temp.empty()){
                seedha.push(temp);
                temp.clear();
            }
        }
        stack<string> reverse;
        while(!seedha.empty()){
            reverse.push(seedha.top());
            seedha.pop();
        }
        stack<string> last;
        string result;

        while(!reverse.empty()){
            if(reverse.top()=="."){
                reverse.pop();
                continue;
            }
            if(reverse.top()==".."){
                if(!last.empty()) last.pop();
                reverse.pop();
                continue;
            }
            last.push(reverse.top());
            reverse.pop();
        }
        stack<string> lastreverse;
        while(!last.empty()){
            lastreverse.push(last.top());
            last.pop();
        }
        if(lastreverse.empty()) return "/";
        while(!lastreverse.empty()){
            result.push_back('/');
            result.append(lastreverse.top());
            lastreverse.pop();
        }
        return result;
    }
};