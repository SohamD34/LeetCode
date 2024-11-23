// https://leetcode.com/problems/three-consecutive-odds

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        
        int n = arr.size();

        if(n==3){
            if(arr[0]%2!=0 && arr[1]%2!=0 && arr[2]%2!=0){
                return true;
            }
            else{
                return false;
            }
        }
        
        for(int i=0; i<n-2; i++){
            if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0){
                return true;
            }
        }
        return false;
    }
};