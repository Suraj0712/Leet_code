class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) 
    {
        vector<int> ret;
        ret.resize(A.size());
        
        int front = 0;
        int back  = A.size()-1;
        
        for(auto i: A)
        {
            if(i%2 ==0)
            {
                ret[front] = i;
                front++;
            }
            else
            {
                ret[back] = i;
                back--;
            }
        }
        
        return ret;
    }
};
