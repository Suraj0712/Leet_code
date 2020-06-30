class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int,int> m;
        auto it = m.begin();
        
        for(auto i: nums)
        {
            it = m.find(i);
            if(it == m.end())
            {
                pair<int,int> p(i,1);
                m.insert(p);
            }
            else
            {
                m.erase(it);
            }
        }
        return m.begin()->first;
    }
};
