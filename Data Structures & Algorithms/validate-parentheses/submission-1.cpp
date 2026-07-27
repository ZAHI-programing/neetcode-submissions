class Solution {
public:
    int value(char c){
        switch(c){
            case '(':
            return 1;
            case '{':
            return 2;
            case '[':
            return 3;
            case ')':
            return 6;
            case '}':
            return 5;
            case ']':
            return 4;
            default :
            return 0;
        }
    }
    bool isValid(string s) {
        stack<char> st;
        for(char c: s){
            int x = value(c);
            if(x<=3){
                st.push(c);
            }
            else if(st.empty()){
                return false;
            }
            else{
                char c1 = st.top();
                st.pop();
                if(value(c1)+x != 7){
                    return false;
                }
            }

        }
        return st.empty();
    }
};
