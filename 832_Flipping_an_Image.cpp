class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) 
    {
        int mid_point =0;
        if(A[0].size()%2 ==0)
        {
            mid_point = A[0].size()/2 - 1;
        }
        else
        {
             mid_point = A[0].size()/2;
        }
        
        // cout<<mid_point<<" \n";
        
        int temp=0;
        for(int i=0; i<A.size(); i++)
        {
            for(int j=0; j<=mid_point; j++)
            {
                // cout<<"Before: "<<j<<"  "<<A[i][j]<<"  |  "<<A[0].size() -(j+1)<<"  "<<A[i][A[0].size() -(j+1)]<<"\n";
                temp = A[i][A[0].size() -(j+1)];
                if(A[i][j] ==0)
                {
                    A[i][A[0].size() -(j+1)] = 1;
                }
                else
                {
                    A[i][A[0].size() -(j+1)] = 0;
                }
                
                if(temp ==0)
                {
                    A[i][j] = 1;
                }
                else
                {
                    A[i][j] = 0;
                }
                // cout<<"After: "<<j<<"  "<<A[i][j]<<"  |  "<<A[0].size() -(j+1)<<"  "<<A[i][A[0].size() -(j+1)]<<"\n";
                
            }
        }
        return A;
    }
};
