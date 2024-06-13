class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int moves = 0;
        int i = 0;
        while(i < seats.size()) {
             moves += abs(seats[i] - students[i]);
             i++;
        }
        return moves;
    }
};
