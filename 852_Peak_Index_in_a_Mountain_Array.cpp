class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) 
    {   
        int prev = INT_MIN;
        int ret;

        for(int i=0; i<A.size(); i++)
        {
            if(A[i]>prev)
            {
                prev = A[i];
            }
            else
            {
                ret = i-1; 
                break;                
            }
        }
        return ret;
    }
};
