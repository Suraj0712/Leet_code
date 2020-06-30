class Solution {
public:
    int countLargestGroup(int n) 
    {
        vector<int> freq;
        freq.resize(37);
        int sum;
        string s;
        for(int i=1; i<=n; i++)
        {
            sum =0;
            s = to_string(i);
            for(auto j: s)
            {
                sum = sum + int(j-'0');
            }
            
            // cout<<i<<" --> "<<sum<<"\n";
            freq[sum]++;            
        }
               
        int ele = *max_element(freq.begin(), freq.end());
        cout<<ele;
        sum =0;
        
        for(auto i: freq)
        {
            if(i == ele)
            {
                sum++;
            }
        }
        
        return sum;
    }
};
