 int dx[] = {0,1,0,-1};
 int dy[] = {-1,0,1,0};
       

class Solution {
    
public:
    int numIslands(vector<vector<char>>& grid) {
        
       
        int row = grid.size(); 
         if(row == 0) return 0;
        int col = grid[0].size(),i,j;
        
       
        vector<vector<int> > visited(row, vector<int>(col,0));
        int color=0;
        for(i=0;i<row;i++){
            
            for(j=0;j<col;j++){
                
                if(!visited[i][j] && grid[i][j] == '1'){
                    color++;
                    dfs(i,j,grid,visited,color);
                }
            }
        }
        
        return color;
    }
    
    void dfs(int i,int j,vector<vector<char>> & grid,vector<vector<int>> &visited,int color){
        if(i<0 || j<0 || i>= grid.size() || j>=grid[0].size() || visited[i][j] || grid[i][j]=='0') return;
        
        visited[i][j]=1;
        int k;
        
        for(k=0;k<4;k++){
            int nx = i + dx[k];
            int ny = j + dy[k];
            
            dfs(nx,ny,grid,visited,color);
            
        }
        
        
    }
};