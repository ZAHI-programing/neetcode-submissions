class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> h;
        int l=0, maxl = 0;
        for(int r=0;r< s.size(); r++){
            while(h.contains(s[r])){
                h.erase(s[l]);
                l++;
            }
            h.insert(s[r]);
            maxl = max(maxl,r-l+1);

        }
        return maxl;
    }
};
