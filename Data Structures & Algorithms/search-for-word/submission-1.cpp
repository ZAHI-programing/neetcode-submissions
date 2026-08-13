class Solution {
    vector<char> res;
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        bool boolExist = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]== word[0]){
                    boolExist = backtrack(board,word,0,i,j); 
                }
                if(boolExist){return true;}
            }
        }
        return boolExist;//false
    }

    bool backtrack(vector<vector<char>>& board, string word,int k,int i,int j){
        if(i <0 || i>=board.size() || j<0 || j>=board[0].size()){
            return false;
        }
        char c = word[k];
        if(board[i][j] != c){
            return false;
        }
        if(k == word.size()-1){
            return true;
        }
        char tmp = board[i][j];
        board[i][j] = '#';
        bool found = backtrack(board,word,k+1,i+1,j) ||
        backtrack(board,word,k+1,i-1,j) ||
        backtrack(board,word,k+1,i,j+1) ||
        backtrack(board,word,k+1,i,j-1);

        board[i][j] = tmp;
        return found;
    }
};
