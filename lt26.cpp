class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int n = t.length();
        int l = 0;
        int matchcount = s.length();
        for (int i = 0; i < n; i++)
        {
            if (t[i] == s[l])
            {
                matchcount--;
                l++;
            }
            if (matchcount == 0)
            {
                break;
            }
        }
        if (matchcount == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};