class Solution {
public:

    string encode(vector<string>& strs) {
        string c = "";
        for(string str:strs){
            c += to_string(str.size()) + "#" + str;
        }
        return c;
    }

    vector<string> decode(string s) {
       vector<string> strs;
       string str = "";
       int i = 0, j, size1;
       while( i < s.size()){
        j = i;
        while(s[j] != '#'){
            j++;
        }
        size1 = stoi(s.substr(i, i-j));
        strs.push_back(s.substr(j+1, size1));
        i = j+1+ size1;

       }
       return strs;
    }
};
