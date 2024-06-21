class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n = s.size();
        int n2 = words.size();
        int main = words[0].size();
        vector<int> result;
        bool match = false;
        map<char, int> index;
        
        for (int i = 0; i < n2; i++) {
            char temp;
            temp = words[i][0];
            index[temp] = i;
        }

        int l = 0;
        int r = 0;
        while (r < n) {
            if (index.find(s[r]) == index.end()) {
                l++;
                r++;
            } else {
                int neededindex = r;
                int count = index[s[r]];
                for (auto j : words[count]) {
                    if (j == s[r]) {
                        match = true;
                        r++;
                    } else {
                        match = false;
                        r = l + 1;
                        l = r;
                        break;
                    }
                }
                if (match) {
                    result.push_back(neededindex);
                    l = r;
                }
            }
        }

        return result;
    }
};
