
        class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> b;
        //int n = strs.size();
        for(auto str:strs){
            int c[26] = {0};
            for(char ch:str){
                c[ch-'a']++;
            }
            string key;
            for(int i=0;i<26;i++){
                key += '#' + to_string(c[i]);
            }
            b[key].push_back(str);
        }
        for(auto p:b){
            result.push_back(p.second);
        }
        return result;
    }
};
