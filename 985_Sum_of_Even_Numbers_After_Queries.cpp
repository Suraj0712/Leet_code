class Solution {
public:

    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) 
    {
        vector<int> ret;
        int sum =0;
        
        for(auto i: A)
        {
            if(i%2 == 0)
            {
                sum = sum+i;
            }
        }
        
        // cout<<sum<<" \n";
        int temp =0;
        
        for(auto i: queries)
        {
           temp = A[i[1]];
            
            if(abs(A[i[1]] + i[0])%2 == 0)
            {
                if(temp%2 ==0)
                {
                    sum = sum+ i[0];
                }
                else
                {
                    sum = sum + i[0] + A[i[1]];
                }
                
            }
            else
            {
                if(temp%2 ==0)
                {
                    sum = sum -temp;
                }
            }

            A[i[1]] = A[i[1]] + i[0];
            
            ret.push_back(sum);
        }
        
        return ret;

    }
};
