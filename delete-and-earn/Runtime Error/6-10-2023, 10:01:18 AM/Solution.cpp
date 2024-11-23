// https://leetcode.com/problems/delete-and-earn

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int n = nums.size();

        for(int i=0; i<n; i++){
            if(i==0 or i==1){
                nums[i] = nums[i];
            }
            else if(i==2){
                nums[i] += nums[i-2];
            }
            else{
                nums[i] += max(nums[i-2],nums[i-3]);
            }
        }
        
        return max(nums[n-1],nums[n-2]);
    }
};