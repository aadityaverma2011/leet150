class Solution
{
public:
    string convert(string s, int numRows)
    {
        vector<vector<char>> arr(numRows, vector<char>(s.size(), '\0'));
        if (numRows == 1)
        {
            return s;
        }
        bool gozigzag = false;
        int j = 0;
        int i = 0;
        int push = 0;
        int count = 0;
        int n = s.size();
        while (count < n)
        {
            for (i; i < numRows && count < n; i++)
            {
                arr[i][j] = s[count];
                count++;
            }
            i = i - 1;
            gozigzag = true;
            if (gozigzag && i > 0)
            { 
                while (i != 0)
                {
                    i = i - 1;
                    j = j + 1;
                    arr[i][j] = s[count];
                    count++;
                }
                gozigzag = false;
                i = i + 1;
            }
        }
        string newstring;
        for (int x = 0; x < numRows; x++)
        {
            for (int y = 0; y < arr[x].size(); y++)
            {
                if (arr[x][y] != '\0')
                {
                    newstring.push_back(arr[x][y]);
                }
            }
        }

        return newstring;
    }
};