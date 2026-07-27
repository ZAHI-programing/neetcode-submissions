class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, f= s.size()-1;
        while(i<f){
            while(i<f &&!isalnum(s[i])){ i++;}
            while(i<f && !isalnum(s[f])){ f--;}
            if(tolower(s[f])!=tolower(s[i])){
                return false;
            }
            f--;
            i++;
        }
        return true;
    }
};
