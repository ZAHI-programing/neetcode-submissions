class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int n = nums.size();
        // int maxP= INT_MIN;
        // int a = nums[0];
        // for(int i=1;i<n;i++){
        //     a = max2(nums,a,nums[i],maxP);
        // }
        // return max(a,maxP);
        return maxProduct2(nums);
    }

    int maxProduct2(vector<int>& nums) {
    int product = 1;
    int prevMax = INT_MIN;
    int curMax = 1;
    int secondProduct = 1;

    bool seenNegative = false;
    bool seenPositive = false;
    bool seenOne = false;
    bool spa = false;

    for (int x : nums) {

        // Reset after zero
        if (x == 0) {
            prevMax = max(prevMax, product);
            prevMax = max(prevMax, curMax);
            prevMax = max(prevMax, secondProduct);

            product = 1;
            curMax = 1;
            secondProduct = 1;
            seenNegative = false;

            continue;
        }


        // Update whole segment product
        product *= x;


        if (x < 0) {

            if (!seenNegative) {
                // First negative
                seenNegative = true;
                curMax = 1;
            }
            else {
                // Second negative
                secondProduct *= x;
                spa = true;
                
            }


        }
        else {
            // Positive number
            seenPositive = true;
            if(x==1){seenOne = true;}
            curMax *= x;

            if (seenNegative) {
                secondProduct *= x;
            }
        }


        // Keep track of the best values
        prevMax = max(prevMax, product);
        prevMax = max(prevMax, curMax);
        prevMax = max(prevMax, secondProduct);
    }
    if(!seenPositive && prevMax==1 && !spa){
        prevMax=INT_MIN;
    for(int x:nums){
        if(x>prevMax){ prevMax = x;}
    }
    return prevMax;
    }
    return max(max(prevMax, product),max(curMax, secondProduct));
}


    
    // int max1(vector<int>& nums,int start){
    //     int n = nums.size();
    //     int p=1,prevMax=INT_MIN;
    //      for(int i=start;i<n;i++){
    //         int a=nums[i];
    //         int b=nums[i+1];
    //         if(a*b > a && a*b >b){p = a*b;}
    //         else{ p = max(a,b);}
            
    //      }
    //     return pMax;
    // }
};