class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) 
    {
        return max((((*max_element(A.begin(),A.end()))-K) - ((*min_element(A.begin(),A.end()))+K )),0);
    }
};

