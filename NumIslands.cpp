class Solution {
public:
    
    void markconnectedones(vector<vector<char>>& grid, int x, int y, int row, int col){
        
        if (x<0 || x>=row || y<0 || y>=col || grid[x][y]!='1') return;
        
        
        grid[x][y] = '2';
        
        markconnectedones(grid, x+1, y, row, col);
        markconnectedones(grid, x, y+1, row, col);
        markconnectedones(grid, x-1, y, row, col);
        markconnectedones(grid, x, y-1, row, col);
          
        
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int num_islands = 0;
        
        
        if (m == 0) return 0;
        
        
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                
                if (grid[i][j] == '1'){
                    markconnectedones(grid, i, j, m, n);
                    num_islands+=1;
                }
            }
            
        }
        
    return num_islands;
    }
};