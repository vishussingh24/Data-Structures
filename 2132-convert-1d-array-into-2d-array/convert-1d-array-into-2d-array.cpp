class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        if(m*n!=original.size()){
            return {};
        }
        int row=0;
        vector<vector<int>> matrix(m, vector<int>(n));
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                matrix[i][j]=original[row];
                    row++;
            }
        }
        return matrix;



    }
};