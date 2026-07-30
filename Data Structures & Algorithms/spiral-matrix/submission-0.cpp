class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> v;
        int l=0,t=0,b= matrix.size(),r=matrix[0].size();

      while(t < b && l < r){
        for(int i=l;i<r;i++){
            v.push_back(matrix[t][i]);
        }   
        t++;
        for(int i=t;i<b;i++){
            v.push_back(matrix[i][r-1]);
        }
        r--;
        if(!(t < b && l < r)){break;}
        for(int i=r-1;i>=l;i--){
            v.push_back(matrix[b-1][i]);
        }
        b--;
        for(int i =b-1;i>=t;i--){
            v.push_back(matrix[i][l]);
        }
        l++;

        }
        return v;

    }
};
