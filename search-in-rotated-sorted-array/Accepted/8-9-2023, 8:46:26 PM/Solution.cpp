// https://leetcode.com/problems/search-in-rotated-sorted-array

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        int ans = -1;

        for(int i=0;i<n;i++){
            if(nums[i] == target){
                ans = i;
                break;
            }
        }
        return ans;
    }
};