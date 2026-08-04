class Solution {
public:
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){return nums[0];}
        vector<int> meno(nums.size(),-1);
        vector<int> meno2(nums.size(),-1);
        return max(bfs(nums, 1,n,meno),bfs(nums,0,n-1,meno2));
    }

    int bfs(vector<int>& nums,int i,int n,vector<int>& meno){
        if(i>= n){return 0;}
     
        if(meno[i]!=-1){return meno[i];}

        meno[i] =max(bfs(nums,i+1,n,meno),nums[i]+bfs(nums,i+2,n,meno));
        return meno[i];
    }
};

