class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) 
    {
        int min = INT_MAX;
        int col_index =0;
        bool flag;
        vector<int> ret;
        
        for(int i=0; i<matrix.size(); i++)
        {
            min = INT_MAX;
            for(int j=0; j<matrix[0].size(); j++)
            {
                if(matrix[i][j]<min)
                {
                    min= matrix[i][j];
                    col_index = j;
                }
            }

            flag =true;
            for(int k=0; k<matrix.size(); k++)
            {
                if(matrix[k][col_index]>min)
                {
                   flag = false; 
                }
            }
            
            if(flag)
            {
                ret.push_back(min);
            }
        }
        
        return ret;
    }
};
