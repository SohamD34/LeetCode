// https://leetcode.com/problems/power-of-three

class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n<=0){
            return false;
        }
        else if(n==1){
            return true;
        }
        else{
            if(0<n && n<1){
                return isPowerOfThree(pow(n,-1));
            }
            else{
                if(n%3==0){
                    return isPowerOfThree(n/3);
                }
                else{
                    return false;
                }
            }
        }
    }
};