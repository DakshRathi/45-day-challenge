class Solution {
public:
    bool isAnagram(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        if(s.size() != t.size()) return false;

        int valCount[26] = {0};

        for(int i = 0 ; i<s.size() ; i++) valCount[s[i] - 'a']++;
        for(int i = 0 ; i<t.size() ; i++) valCount[t[i] - 'a']--;

        for (int i = 0; i < 26; i++) if (valCount[i] != 0) return false;

        return true;
    }
};