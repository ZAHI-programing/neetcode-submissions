class Solution {
private:
    vector<vector<int>> res;
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> cur;
        backtrack(0,nums,cur,target);
        return res;
    }

    void backtrack(int i,vector<int>& nums,vector<int>& cur,int target) {       if(target == 0){
        res.push_back(cur);
        return;}
        if(target < 0 || i>=nums.size()){
            return;
        }
        cur.push_back(nums[i]);
        backtrack(i,nums,cur,target-nums[i]);
        cur.pop_back();
        backtrack(i+1,nums,cur,target);
    }
};
