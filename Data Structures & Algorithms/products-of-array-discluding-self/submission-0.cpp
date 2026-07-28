class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     vector<int> output(nums.size(),1);

     int pre = 1, post = 1;
     for(int i=0;i< nums.size()-1;i++){
        pre *= nums[i];
        output[i+1] = pre;
     }
     for(int i = nums.size()-1; i > 0; i--){
        post *= nums[i];
        output[i-1] *= post;
     }
     return output;
    }
};
