class Solution {
public:
    int repeatedNTimes(vector<int>& A) 
    {
        unordered_set<int> u;
        int ret_int;
        auto it = u.begin();
        
        for(auto i: A)
        {
            it = u.find(i);
            if(it == u.end())
            {
                u.insert(i);
            }
            else
            {
                ret_int =i;
                break;
            }
        }
        return ret_int;
    }
};
