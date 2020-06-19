class Solution {
public:
    int minDeletionSize(vector<string>& A)
    {
        vector<bool> del;
        del.resize(A[0].size());
        for(int i=0; i<A[0].size(); i++)
        {
            for(int j=1; j<A.size(); j++)
            {
                if(int(A[j-1][i])>int(A[j][i]))
               {
                   del[i] = true;
                   break;
               }    
            }
        }

        return count(del.begin(), del.end(),1);   
    }
};
