// https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        
        int sum = 0;
       sort(seats.begin(), seats.end()) ;
       sort(students.begin(), students.end());

       for(int i=0; i<seats.size(); i++)
          sum += abs(students[i] - seats[i]);

        return sum;
    }
};