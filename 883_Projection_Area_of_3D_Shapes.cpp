class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) 
    {
        int ret=0;
        vector<int> v;
        v.resize(grid[0].size());
        
        for(auto i: grid)
        {
            for(auto j:i)
            {
                if(j!=0)
                {
                    ret++;
                }
            }
        }
        cout<<ret<<"\n";
        
        for(auto i : grid)
        {
            ret = ret+ *max_element(i.begin(),i.end());
            for(int j=0; j<i.size(); j++)
            {
                if(v[j]<i[j])
                {
                    v[j]=i[j];
                }
            }
        }
        cout<<ret<<"\n";
        ret = ret+accumulate(v.begin(),v.end(),0);
        cout<<ret<<"\n";
        
        return ret;
    }
};
