class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size()!=t.size())
        {
            return false;
        }
        unordered_map<char,int> m;
        auto it = m.begin();
        for(auto i: s)
        {
            it = m.find(i);
            if(it==m.end())
            {
                pair<char,int> p(i,1);
                m.insert(p);
            }
            else
            {
                it->second++;
            }
        }
        
        for(auto i: t)
        {
            it = m.find(i);
            if(it==m.end())
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
        
        if(m.size() ==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
