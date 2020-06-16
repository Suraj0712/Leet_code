class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) 
    {
//         multiset<int> ms;
        
//         for(auto i: A)
//         {
//             ms.insert(pow(i,2));
//         }
        
//         A.assign(ms.begin(),ms.end());
        
//         return A;
        

        vector<int> res(A.size(), 0);
        
        int i = 0; 
        int j = A.size() - 1;
        int k = A.size() - 1;
        
        while (i <= j)
        {
            if (abs(A[i]) < abs(A[j]))
            {
                res[k--] = A[j] * A[j];
                --j;
            }
            else
            {
                res[k--] = A[i] * A[i];
                ++i;
            }
        }
        
        return res;

    }
};
