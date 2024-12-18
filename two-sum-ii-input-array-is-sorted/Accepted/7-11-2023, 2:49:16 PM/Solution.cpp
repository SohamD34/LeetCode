// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int high = numbers.size()-1;
        int low = 0;

        vector<int> ans;

        while(low<=high){

            if(numbers[low] + numbers[high] == target){
                ans.push_back(low+1);
                ans.push_back(high+1);
                break;
            }

            else if(numbers[low] + numbers[high] > target){
                high--;
            }
            else if(numbers[low] + numbers[high] < target){
                low++;
            }
        }

        return ans;
    }
};