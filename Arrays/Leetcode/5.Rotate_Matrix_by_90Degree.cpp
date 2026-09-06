//Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
//Output: [[7,4,1],[8,5,2],[9,6,3]]

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i=0 ; i<n; i++)
        {
             for(int j = i+1 ; j<n; j++)
             {
                swap(matrix[i][j],matrix[j][i]);
             }
        }

        for(int i=0; i<n; i++)
        {
            int start =0, end =n-1;

            while(start<end)
            {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }

        }
    }
};
