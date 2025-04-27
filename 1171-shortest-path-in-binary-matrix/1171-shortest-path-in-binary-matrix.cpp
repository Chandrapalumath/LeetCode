
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        
        // If start or end is blocked
        if (grid[0][0] != 0 || grid[n-1][n-1] != 0)
            return -1;
        
        // Directions (8 directions)
        vector<pair<int, int>> directions = {
            {-1, -1}, {-1, 0}, {-1, 1},
            {0, -1},          {0, 1},
            {1, -1}, {1, 0}, {1, 1}
        };
        
        queue<pair<int, int>> q;
        q.push({0, 0});
        grid[0][0] = 1; // Mark as visited by putting step count
        
        while (!q.empty()) {
            auto [row, col] = q.front();
            q.pop();
            int steps = grid[row][col];
            
            // If reached destination
            if (row == n-1 && col == n-1)
                return steps;
            
            for (auto [dr, dc] : directions) {
                int r = row + dr;
                int c = col + dc;
                
                if (r >= 0 && c >= 0 && r < n && c < n && grid[r][c] == 0) {
                    q.push({r, c});
                    grid[r][c] = steps + 1; // Mark visited and record steps
                }
            }
        }
        
        // No path found
        return -1;
    }
    
};
    