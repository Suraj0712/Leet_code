class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> ret;
        ret.resize(2*n);
        
        int index=0;
        
        for(int i=0; i<n; i++)
        {
            ret[index] = nums[i];
            index++;
            ret[index] = nums[i+n];
            index++;      
        }
        
        return ret;
    }
};

