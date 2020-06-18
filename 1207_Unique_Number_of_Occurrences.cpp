class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        unordered_map<int,int> m;
        unordered_set<int> s;
        bool var = true;
        
        auto itm = m.begin();
        auto its = s.begin();
        
        for(auto i: arr)
        {
            itm = m.find(i);
            if(itm==m.end())
            {
                pair<int,int> p(i,1);
                m.insert(p);
            }
            else
            {
                itm->second++;
            }
        }
        
        
        for(auto i: m)
        {
            its = s.find(i.second);
            if(its==s.end())
            {
                s.insert(i.second);
            }
            else
            {
                var = false;
                break;
            }            
        }
        
        return var;   
    }
};

