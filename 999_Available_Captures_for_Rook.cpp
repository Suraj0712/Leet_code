class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) 
    {
        int x,y;
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[0].size(); j++)
            {
                if(board[i][j] == 'R')
                {
                    x = i;
                    y = j;
                }
            }
        }
        int ret =0;
        
        for(int i=0; i<8; i++)
        {
            if(x+i<8)
            {
                if(board[x+i][y] == 'B')
                {
                    break;
                }
                if(board[x+i][y] == 'p')
                {
                    ret++;
                    break;
                }
            }
        }
        
        for(int i=0; i<8; i++)
        {
            if(x-i>=0)
            {
                if(board[x-i][y] == 'B')
                {
                    break;
                }
                if(board[x-i][y] == 'p')
                {
                    ret++;
                    break;
                }
            }
        }
        
        for(int i=0; i<8; i++)
        {
            if(y+i<8)
            {
                if(board[x][y+i] == 'B')
                {
                    break;
                }
                if(board[x][y+i] == 'p')
                {
                    ret++;
                    break;
                }
            }
        }
        
        for(int i=0; i<8; i++)
        {
            if(y-i>=0)
            {
                if(board[x][y-i] == 'B')
                {
                    break;
                }
                if(board[x][y-i] == 'p')
                {
                    ret++;
                    break;
                }
            }
        }

        return ret;
        
    }
};
