class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        set<char> rows[9];
        set<char> cols[9];
        unordered_map<int, pair<int,int>> m;
        set<char> individual[9];

        for(int i = 0;i<9;i++)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                if(board[i][j] != '.')
                {
                    if(rows[i].find(board[i][j]) !=rows[i].end())
                    {
                        return false;
                    }
                    rows[i].insert(board[i][j]);
                }
            }
        }

        for(int i = 0;i<9;i++)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                if(board[j][i] != '.')
                {
                    if(cols[i].find(board[j][i]) !=cols[i].end())
                    {
                        return false;
                    }
                    cols[i].insert(board[j][i]);
                }
            }
        }


        int index = 0;
        for(int i = 0 ; i < 9 ; i = i+3)
        {
             for(int j = 0 ; j < 9 ; j = j+3)
             {
                m[index++] = {i,j};
             }
        }

        for(int region = 0 ; region < 9 ; region++)
        {
            auto startrow = m[region].first;
            auto startcol = m[region].second;
            for(int i = startrow; i < (startrow +3);i++)
            {
                for(int j = startcol; j < (startcol +3);j++)
                {
                if(board[i][j] != '.')
                {
                    if(individual[region].find(board[i][j]) !=individual[region].end())
                    {
                        return false;  
                    }
                    individual[region].insert(board[i][j]);
                }
                }
            }
        }

        return true;
        
    }
};
