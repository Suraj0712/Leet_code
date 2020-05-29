class Solution {
public:
    int findNumbers(vector<int>& nums)
    {
        int ret_count =0;
        
        for(auto i: nums)
        {
            if((floor(i/10)<=9 and floor(i/10)>=1) or (floor(i/1000)<=9 and floor(i/1000)>=1))
            {
                ret_count++;
            }
        }
        
        return ret_count;
        
    }
};