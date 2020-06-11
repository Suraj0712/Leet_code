class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
     
        
//         int count=0;
        
//         int row = grid.size();
//         int col = grid[0].size();
        
//         for(int i=0; i<row; i++)
//         {
//             for(int j=0; j<col; j++)
//             {
//                 if(grid[i][j]<0)
//                 {
//                     count = count + (col-j);
//                     cout<<i<<"  "<<j<<"\n";
//                 }
//             }
//         }
//         return count;
        
        int count =0;
        
        int row = grid.size();
        auto it = grid[0].begin();
        
        for(int i=0; i<row; ++i)
        {
            it = lower_bound(grid[i].begin(), grid[i].end(), -1, std::greater<int>());            
            count = count + grid[i].size() - (it - grid[i].begin());
        }
        return count;  
    }
};
