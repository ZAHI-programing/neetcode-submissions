class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> q;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]] +=1;
        }
        for(auto p:mp){
            q.push({p.second,p.first});
        }
        vector<int> result;
        for(int i=0;i<k;i++){
            int max = q.top().second;
            q.pop();
            result.push_back(max);
        }
        return result;
    }
};
