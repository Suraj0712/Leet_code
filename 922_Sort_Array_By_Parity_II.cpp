class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) 
    {
               
        int odd_index_even;
        int even_index_odd;
        
        for(int i=0; i<A.size(); i++)
        {
            if(i%2 ==0 and A[i]%2!=0)
            {
                // cout<<"in if \n";
                even_index_odd=i;
                odd_index_even=i;
                while(A[odd_index_even]%2 !=0)
                {
                    odd_index_even++;
                }
                swap(A[odd_index_even],A[even_index_odd]);
            }
            else if(i%2 !=0 and A[i]%2==0)
            {
                // cout<<"in else \n";
                even_index_odd=i;
                odd_index_even=i;
                while(A[even_index_odd]%2 ==0)
                {
                    even_index_odd++;
                }
                swap(A[even_index_odd],A[odd_index_even]);
                // cout<<even_index_odd<<" "<<odd_index_even<<"\n";
            }
            // for(auto i: A)
            // {
            //     cout<<i<<" ";
            // }
            // cout<<"\n";
        }
        return A;
    }
};
