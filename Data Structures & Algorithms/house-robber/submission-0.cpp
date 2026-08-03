class Solution {
public:
    // int rob(vector<int>& nums) { 
    //     return dfs(nums,0);
    // }

    // int dfs(vector<int> &nums,int i){
    //     if(i >= nums.size()){return 0;}
        
    //     return max(dfs(nums,i+1), nums[i]+ dfs(nums,i+2));
    // }

    // int rob(vector<int>& nums){
    //     vector<int> meno(nums.size(),-1);
    //     return dfs(nums,0,meno);
    // }
    // int dfs(vector<int>&nums,int i,vector<int>& nemo){
    //     if(i >= nums.size()){return 0;}

    //     if(nemo[i] != -1){return nemo[i];}
    //     nemo[i] = max(dfs(nums,i+1,nemo),nums[i]+dfs(nums,i+2,nemo));
    //     return nemo[i];
    // }

    int rob(vector<int>& nums){
        int rob1= 0,rob2 = 0, tmp;
        for(int num:nums){
            tmp = max(rob1+num,rob2);
            rob1 = rob2;
            rob2 = tmp;
        }
        return rob2;
    }
};
