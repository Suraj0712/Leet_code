class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        unordered_map<char,int> map;
        for(auto it=S.begin(); it!=S.end(); it++)
        {
            auto itr = map.find(*it);
            if(itr == map.end())
            {
                pair<char,int> p(*it,1);
                map.insert(p);
            }
            else
            {
                (itr->second)++;
            }
        }
        
        int ret_int=0;
        
        for(auto i=J.begin(); i!=J.end(); i++)
        {
            auto itr = map.find(*i);
            if(itr != map.end())
            {
                ret_int = ret_int+itr->second;
            }
        }
        
        return ret_int;
    }
};