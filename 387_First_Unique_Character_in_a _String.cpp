class Solution {
public:
    int firstUniqChar(string s) 
    {
        if(s.size()==0)
        {
            return -1;
        }
        
        unordered_map<char,int> map;
        auto it= map.begin();
        
        for(auto i: s)
        {
            it= map.find(i);
            if(it== map.end())
            {
                pair<char,int>p(i,1);
                map.insert(p);
            }
            else
            {
                it->second++;
            }
        }
        
        int ret_index = INT_MAX;
        
        for(auto i: map)
        {
            if(i.second ==1)
            {
                if(s.find(i.first)<ret_index)
                {
                     ret_index= s.find(i.first);
                }
            }
        }
        
        if(ret_index==INT_MAX)
        {
            return -1;
        }
        else
        {
            return ret_index;
        }
    }
};