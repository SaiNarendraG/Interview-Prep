class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map <vector<int> , int> mp ; 
        int ans = 0 ; 
        for(auto ele : grid) mp[ele] ++ ; 
        
         int row = grid.size();
        int col = grid[0].size();
        
        for (int j=0; j<col; j++) {
            vector<int> curr;
            for (int i=0; i<row; i++) {
                curr.push_back(grid[i][j]);
            }
            ans += mp[curr];
        }
        return ans ; 
    }
};