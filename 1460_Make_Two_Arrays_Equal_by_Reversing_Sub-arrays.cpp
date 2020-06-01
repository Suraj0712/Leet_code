class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) 
    {
        
        unordered_map<int,int> m;
        auto it =m.begin();
        
        for(auto i: arr)
        {
            it = m.find(i);
            if(it == m.end())
            {
                pair<int,int> c(i,1);
                m.insert(c);
            }
            else
            {
                it->second++;
            }
        }
              
        for(auto i: target)
        {
            it = m.find(i);
            if(it == m.end())
            {
                return false;
            }
            else
            {
                it->second--;
                if(it->second ==0)
                {
                    m.erase(it);
                }
            }
        }
        
        if(m.size()==0)
        {
            return true; 
        }
        else
        {
            return false;
        }        
    }
};