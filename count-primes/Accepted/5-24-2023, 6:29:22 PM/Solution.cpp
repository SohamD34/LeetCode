// https://leetcode.com/problems/count-primes

class Solution {
public:
    int countPrimes(int n) {
        
        vector<bool>vec(n+1,0);
        for(long long i=2;i<=n;i++){
            if(vec[i]==0){
            for(long long j=i*i;j<=n;j+=i){
                vec[j]=1;
            }
            }
        }
        long long ans=0;
        for(long long i=2;i<n;i++){
            if(vec[i]==0) ans++;
        }
        return ans;
    }
        
};