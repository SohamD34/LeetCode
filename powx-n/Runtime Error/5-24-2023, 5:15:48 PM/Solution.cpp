// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) {

        double ans = 1;

        if(x==1 or x==0){
            return x;
        }
        else if(x==-1){
            if(n%2 == 0){
                return 1;
            }
            else{
                return -1;
            }
        }
        else{
            if(n>=0){
                for(int i=0; i<n; i++){
                    ans*=x;
                }
                return ans;
            }
            else{
                for(long int i=0;i<(-1*n); i++){
                    ans*=x;
                }
                return (double)(1/ans);
            }
        }
    }
};