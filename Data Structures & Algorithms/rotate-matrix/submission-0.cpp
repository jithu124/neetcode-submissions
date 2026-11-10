class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        const int N = matrix[0].size();

        for(int row = 0 ; row < N ; row++)
        {
            for(int col = 0 ; col < N-row ; col++)
            {
                exchange(matrix[row][col],matrix[N-col-1][N-row-1]);
            }
        }

         for(int col = 0 ; col < N ; col++)
        {
            for(int row = 0 ; row < N/2 ; row++)
            {
                exchange(matrix[row][col],matrix[N-row-1][col]);
            }
        }
        
        
    }



    void exchange(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
};
