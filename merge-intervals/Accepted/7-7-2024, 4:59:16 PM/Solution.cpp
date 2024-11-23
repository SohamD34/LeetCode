// https://leetcode.com/problems/merge-intervals

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());

        int curr_start = 0;
        int curr_end = 0;
        
        vector<vector<int>> merged_intervals;

        for(int i = 0; i < intervals.size(); i++){
            if(i == 0){
                curr_start = intervals[i][0];
                curr_end = intervals[i][1];
            }
            else{
                if(intervals[i][0] <= curr_end){
                    curr_end = max(curr_end, intervals[i][1]);
                }
                else{
                    merged_intervals.push_back({curr_start, curr_end});
                    curr_start = intervals[i][0];
                    curr_end = intervals[i][1];
                }
            }
            cout<<curr_start<<" "<<curr_end<<endl;
        }

        merged_intervals.push_back({curr_start, curr_end});
        return merged_intervals;
    }
};