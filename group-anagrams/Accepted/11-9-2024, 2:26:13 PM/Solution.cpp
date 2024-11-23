// https://leetcode.com/problems/group-anagrams

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> unique_sorted_strings;

        for(auto i:strs){
            string j = i;
            sort(j.begin(), j.end());

            if(unique_sorted_strings.find(j) != unique_sorted_strings.end()){
                unique_sorted_strings[j].push_back(i);
            }
            else{
                vector<string> v = {i};
                unique_sorted_strings[j] = v;
            }
        }

        for(auto pair:unique_sorted_strings){
            ans.push_back(pair.second);
        }
        return ans;
    }
};