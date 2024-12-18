// https://leetcode.com/problems/remove-duplicate-letters

class Solution {
public:
    string removeDuplicateLetters(string s) {

        int count[26] = { 0 };
        int visited[26] = { 0 };
        int n = s.size();

        for(int i=0; i<n; i++){
            count[s[i] - 'a']++;
        }
    
        string result = "";
    
        for(int i=0; i<n; i++) {

            count[s[i] - 'a']--;

            if (!visited[s[i] - 'a']){
                
                while (result.size()>0 && result.back()>s[i] && count[result.back()-'a']>0) {
                    visited[result.back() - 'a'] = 0;
                    result.pop_back();
                }
                result += s[i];
                visited[s[i] - 'a'] = 1;
            }
        }
    
        return result;
    }
};