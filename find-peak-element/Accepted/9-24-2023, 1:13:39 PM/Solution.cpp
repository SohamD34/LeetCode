// https://leetcode.com/problems/find-peak-element

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();

        int hi = n-1;
        int lo = 0;

        while(lo < hi){

            int mid = (hi+lo)/2;

            if(nums[mid] > nums[mid+1]){
                hi = mid;
            }
            else{
                lo = mid + 1;
            }
            
        }
        return lo;
    }
};