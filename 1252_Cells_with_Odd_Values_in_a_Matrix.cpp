class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) 
    {
      
        // test.resize(n,vector<bool>(m));
        
        unordered_map<int,int> row;
        unordered_map<int,int> col;
        auto it = row.begin();
        pair<int,int> p;
        
        for(auto i:indices)
        {
            it = row.find(i[0]);
            if(it == row.end())
            {
                p.first =i[0];
                p.second =1;
                row.insert(p);
            }
            else
            {
                if(it->second == 1)
                {
                    it->second =0;
                }
                else
                {
                    it->second =1;
                }
            }
        }
        
        it = col.begin();
        
        for(auto i:indices)
        {
            it = col.find(i[1]);
            if(it == col.end())
            {
                p.first =i[1];
                p.second =1;
                col.insert(p);
            }
            else
            {
                if(it->second == 1)
                {
                    it->second =0;
                }
                else
                {
                    it->second =1;
                }
            }
        }
        
        int row_count=0, col_count=0;
        
        for(auto i: col)
        {
            if(i.second ==1){col_count++;};
        }
        
        for(auto i: row)
        {
            if(i.second ==1){row_count++;};
        }
        
        return (col_count*n-(row_count*col_count))+(row_count*m-(row_count*col_count));
    }
};
