class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = matrix.size();
        int right = matrix[0].size();
        int rowIndex = 0;
        int colIndex = right - 1;
        while(rowIndex < left && colIndex >= 0) {
            int element = matrix[rowIndex][colIndex];
            if(element == target) {
                return true;
            }
            if(target > element) {
                rowIndex++;
            }
            else{
                colIndex--;
            }

        }
        return false;
    }
};
