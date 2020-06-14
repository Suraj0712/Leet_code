class Solution {
public:
    vector<int> sumZero(int n) 
    {
        vector<int> ret;
        
        int start= -1*ceil(n/2);
        
        for(int i=0; i<n; i++)
        {
            if(start==0 and n%2==0)
            {
                start++;
            }
            ret.push_back(start);
            start++;
        }
        return ret;
    }
    
};
