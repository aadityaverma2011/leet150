class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack;
        unordered_map<char, char> bind = {
            {']', '['},
            {')', '('},
            {'}', '{'}};
        int n = s.size();
        if (n == 1)
        {
            return false;
        }
        for (int i = 0; i < n; i++)
        {
            if (bind.find(s[i]) != bind.end())
            {
                if (!stack.empty() && stack.top() == bind[s[i]])
                {
                    stack.pop();
                }
                else
                {
                    return false;
                }
            }
            else{
                stack.push(s[i]);
            }
        }

        return stack.empty();
    }
};
