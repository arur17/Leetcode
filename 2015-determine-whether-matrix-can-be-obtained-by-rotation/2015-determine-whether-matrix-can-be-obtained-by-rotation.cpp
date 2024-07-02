class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        // Function to rotate the matrix 90 degrees clockwise
        auto rotate90 = [](vector<vector<int>>& matrix) {
            int n = matrix.size();
            for (int i = 0; i < n; ++i) {
                for (int j = i; j < n; ++j) {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
            for (int i = 0; i < n; ++i) {
                reverse(matrix[i].begin(), matrix[i].end());
            }
        };

        // Check 0 degrees rotation
        if (mat == target) return true;

        // Check 90, 180, and 270 degrees rotation
        for (int i = 0; i < 3; ++i) {
            rotate90(mat);
            if (mat == target) return true;
        }

        return false;
    }
};
