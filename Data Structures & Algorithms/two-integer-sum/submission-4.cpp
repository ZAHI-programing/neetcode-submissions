class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> map;
         int n= nums.size();
        for(int i=0;i<n;i++){
            map.push_back({nums[i],i});
            int b=target-nums[i];
             for(auto p:map){
                if(p.first==b && i!=p.second){
                    return{p.second,i};
                }
            }
         
           

        }return {};
    }
    
};
