// https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> counts;

        for(int i=0; i<queries.size(); i++){
            int count = 0;

            for(int j=0; j<points.size(); j++){

                if(pow(points[j][0]-queries[i][0],2) + pow(points[j][1]-queries[i][1],2) <= pow(queries[i][2],2)){
                    count++;
                }
            }
            counts.push_back(count);
        }
        return counts;
    }
};