class Solution {
public:
    bool searchInRow(vector<vector<int>>& mat, int target,int r){
       int n = mat[0].size(); 
       int st = 0,end = n-1;


       while(st<=end){
        int mid = st + (end - st) / 2;
        if(target == mat[r][mid]){
            return true;
        }else if(target > mat[r][mid]){
            st = mid + 1;
        }else{
            end = mid - 1;
        }
       }
       return false;
    }



    bool searchMatrix(vector<vector<int>>& mat, int target) {
        // BS of total no of Rows
        int m = mat.size(),n = mat[0].size();
        int sR = 0, eR = m - 1;
        while(sR <= eR){
            int mR = sR + (eR - sR) / 2;
            if(target >= mat[mR][0] && target <= mat[mR][n-1]){
                // found the row => BS on this row
                return searchInRow(mat,target,mR);
            } else if(target >= mat[mR][n-1]){
                // down=>Right
                sR = mR + 1;
            }else{
                // up => left
                eR = mR - 1;
            }
        }
        return false;
    }
};