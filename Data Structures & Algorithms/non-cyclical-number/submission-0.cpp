class Solution {
public:
    int sumOfSquares(int n){
    vector<int> digits;
        while(n>0){
            int lastdigit = n%10;
            digits.push_back(lastdigit);
            n/= 10;
        }
        //reverse(digits.begin(),digits.end());

        int sum=0;
        for(int nb:digits){
            sum += nb*nb;
        }
        return sum;
    }
    bool isHappy(int n) {
        int sum = sumOfSquares(n);
        if(sum == 1)return true;
        unordered_set<int> sums;
        sums.insert(sum);
        while(sum != 1){
            sum = sumOfSquares(sum);
            if(sums.find(sum) != sums.end()){return false;}
            sums.insert(sum);
        }
        return true;

    }
};
