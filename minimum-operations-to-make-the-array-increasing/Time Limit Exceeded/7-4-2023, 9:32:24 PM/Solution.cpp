// https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for(int i=0; i<n-1; i++){
            while(nums[i+1] <= nums[i]){
                nums[i+1] += 1;
                count += 1;
            }
        }

        return count;
    }
};