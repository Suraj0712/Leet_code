class Solution {
public:
    int balancedStringSplit(string s)
    {
        int countl=0;
        int countr=0;
        int ret_count=0;
        
        for(auto i: s)
        {
            i=='L' ? countl++ : countr++;
            if(countl == countr)
            {
                ret_count++;
            }
        }
        return ret_count;
    }

};