class Solution {
public:
    string destCity(vector<vector<string>>& paths) 
    {
        unordered_set<string> u;
        auto it = u.begin();
        
        for(auto i: paths)
        {
            // cout<<i[0]<<"\n";
            // it = u.find(i[0]);
            // if(it == u.end())
            // {
                u.insert(i[0]);
            // }
        }
        
        for(auto i: paths)
        {
            // cout<<i[0]<<"\n";
            it = u.find(i[1]);
            if(it == u.end())
            {
                return i[1];
            }
        }
        return "no answer";
    }
};
