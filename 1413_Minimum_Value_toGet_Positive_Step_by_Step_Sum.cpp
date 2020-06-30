class Solution {
public:
    int minStartValue(vector<int>& nums) 
    {
        int ret = INT_MAX;
        int st =0;
        
        for(auto i: nums)
        {
            st = st+ i;
            if(st<ret)
            {
                ret = st;
            }
        }
        return max(1+ret*-1,1);
    }
};
