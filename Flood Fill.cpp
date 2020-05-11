int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> visited(image.size(),vector<int>(image[0].size(),0));
        solve(image,sr,sc,newColor,visited,image[sr][sc]);
        
        return image;
    }
    
    void solve(vector<vector<int>>& image, int i,int j,int color,vector<vector<int>> & visited,int oldColor){
        
        if(i<0 || i>=image.size() || j<0 || j>=image[0].size() ) return;
        visited[i][j]=1;
        image[i][j] = color;
        
        int k;
        
        for(k=0;k<4;k++){
            
            int nx = i + dx[k];
            int ny = j + dy[k];
            
            if(nx>=0 && nx<image.size() && ny>=0 && ny<image[0].size() && 
               !visited[nx][ny] && image[nx][ny] == oldColor){
                
                solve(image,nx,ny,color,visited,oldColor);
            }
        }
    }
};