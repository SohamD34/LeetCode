// https://leetcode.com/problems/shuffle-the-array

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> ans;
        for(int i=0;i<n/2;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n/2]);
        }

        return ans;
    }
};