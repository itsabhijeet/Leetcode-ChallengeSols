class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        
        vector<int> Line = getLine(c[0],c[1]);
        
        int sz = c.size(),i;
        
        for(i=2;i<sz;i++){
            
            int cal = (c[i][1])*Line[0] - (c[i][0])*Line[1] - Line[2];
            
            if(cal) return false;
        }
        
        return true;
        
    }
    
    vector<int> getLine(vector<int> P1, vector<int> P2){
        
        vector<int> Line;  // 0-> (x2-x1) 1-> (y2-y1) 2-> y1x2 - x1y2
        int y2 = P2[1], y1 = P1[1], x2= P2[0], x1 = P1[0];
        
        Line.push_back(x2-x1);
        Line.push_back(y2-y1);
        Line.push_back(y1 * x2 - x1 * y2);
        
        return Line;
    }
};

/*
  (x2-x1)(y-y1) = (y2-y1)(x-x1)

  y(x2-x1) - y1(x2-x1) = x(y2-y1) -x1(y2-y1)

 y(x2-x1) - x(y2-y1) = y1x2 -y1x1 - x1y2 + x1y1

 y(x2-x1) - x(y2-y1) = y1x2 - x1y2
 
 */
