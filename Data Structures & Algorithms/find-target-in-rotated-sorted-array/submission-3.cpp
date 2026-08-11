class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;

        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){return mid;}
            if(nums[mid] > target && nums[low]<= target){
                high = mid - 1;
                continue;
            }
            if(nums[mid] < nums[high] && nums[mid]>target){
                high = mid - 1;
                continue;
            }
            if(nums[mid] < nums[high] && nums[high]<target){
                high = mid - 1;
                continue;
            }
            low = mid + 1;
        }
        return -1;
    }
};