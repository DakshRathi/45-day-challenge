class Solution {
public:
    vector<string> letterCombinations(string digits)
    {
        if(!digits.size()) return {};

        vector<string> dict{"abc", "def", "ghi", "jkl", "mno", "qprs", "tuv", "wxyz"};
        vector<string> ans{""};
        for(auto &i : digits)
        {
            // Initialize a vector 'next' to store the combinations for the current digit.
            vector<string> next;
            
            // Loop through each character 'c' corresponding to the letters mapped to the current digit.
            for(auto &c : dict[i-'2'])
            {
                // Loop through each existing combination 's' in 'ans' and append the current letter 'c'.
                for(auto &s : ans) next.push_back(s+c);
            }
            ans = next;
        }
        return ans;
    }
};