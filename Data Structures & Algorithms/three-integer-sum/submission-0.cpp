class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(nums[i]>0){break;}
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int b = nums[i];
            int l=i+1, r= nums.size()-1;
            
            while(l<r){
                //int sum = b + nums[r]+nums[l]; and > 0, < 0
                if(nums[r]+nums[l] > (-b)){
                    r--;
                }
                else if(nums[r]+nums[l] < (-b)){
                    l++;
                }
                else{
                    res.push_back({b ,nums[r] ,nums[l] });
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;}
                }
            }
        }
        return res;
    }
};
