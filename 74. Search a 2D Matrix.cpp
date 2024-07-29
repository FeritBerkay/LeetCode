#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowNum = matrix.size();
        int colNum = matrix[0].size();

        int low = 0;
        int high = rowNum - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (target < matrix[mid][0]) {
                high = mid - 1;
            } 
            else if (target > matrix[mid][colNum - 1]) {
                low = mid + 1;
            }
            else {
                int rowToSearch = mid;
                low = 0;
                high = colNum - 1;

                while (low <= high) {
                    int mid = low + (high - low) / 2;
                    if (target == matrix[rowToSearch][mid]) {
                        return true;
                    } 
                    else if (target < matrix[rowToSearch][mid]) {
                        high = mid - 1;
                    } 
                    else {
                        low = mid + 1;
                    }
                }
                return false;
            }
        }

        return false;
    }
};
