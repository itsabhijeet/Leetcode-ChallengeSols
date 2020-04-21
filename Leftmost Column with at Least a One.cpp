/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        
        vector<int> d = binaryMatrix.dimensions();
        int row = d[0],col=d[1],i,j,ans=-1;
        i=0; j=col-1;
        while(i<row && j>=0){
            
            int val = binaryMatrix.get(i,j);
            if(val == 0) i++;
            else ans=j,j--;
        }
        
        return ans;
    }
};