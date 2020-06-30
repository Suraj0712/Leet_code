class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        unordered_map<int,int> m;
        auto it = m.begin();
        
        for(auto i: arr)
        {
            it = m.find(i);
            if(it == m.end())
            {
                pair<int,int> p(i,1);
                m.insert(p);
            }
            else
            {
                it->second++;
            }
        }
        
        int ret = INT_MIN;
        
        for(auto i: m)
        {
            if(i.first == i.second and i.first>ret)
            {
                ret = i.first;
            }
        }
        return max(ret,-1);
    }
};

