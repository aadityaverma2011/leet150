class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        int n= tokens.size();
        for(int i=0 ;i<n;i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/" ){
                stack.push(stoi(tokens[i]));
            }
            else{
                int temp;
                int temp2;
                temp=stack.top();
                stack.pop();
                temp2=stack.top();
                stack.pop();
                int result;
                if(tokens[i]=="+"){
                    result = temp+temp2;
                    stack.push(result);
                }
                if(tokens[i]=="-"){
                    result=temp2-temp;
                    stack.push(result);
                }
                if(tokens[i]=="*"){
                    result=temp2*temp;
                    stack.push(result);
                }
                if(tokens[i]=="/"){
                    result=temp2/temp;
                    stack.push(result);
                }
            }
        }

        return stack.top();
    }
};