// https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits

class Solution {
public:
    int minimumSum(int num) {
        
        vector<int> digitss;
        
        while(num > 0){
            digits.push_back(num%10);
            num/=10;
        }
        
        sort(digits.begin(),digits.end());

        return (digits[0] + digits[1])*10 + (digits[2]+digits[3]);
    }
};