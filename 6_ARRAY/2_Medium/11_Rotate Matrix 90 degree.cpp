//! =========================================== brute Force ============================================
// take every element and place it in the correct order 
// it gets placed in the n-i-1 order.
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> rotated(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                rotated[j][n - i - 1] = matrix[i][j];
            }
        }

        matrix = rotated;
    }
};


//! =========================================== Optimal Approach =====================================
// 1. transpose the matrix 
// 2. reverse the column of the transpose matrix the matrix will roate 90 degree
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
};