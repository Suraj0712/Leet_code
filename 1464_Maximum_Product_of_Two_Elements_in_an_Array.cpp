class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {   
        std::pair<int,int> p;
        p.first = INT_MIN;
        p.second = INT_MIN;
        
        std::pair<int,int> n;
        n.first = INT_MAX;
        n.second = INT_MAX;
        
        for(auto i: nums)
        {
            if(p.first<i)
            {
                p.second = p.first;
                p.first = i;
            }
            else if(p.second<i)
            {
                p.second =i;
            }
            
            if(n.first>i)
            {
                n.second =n.first;
                n.first = i;
            }
            else if(n.second>i)
            {
                n.second =i;
            }
            
            
            
            // cout<<"P.first: "<<p.first<<"   "<<"P.second: "<<p.second<<"\n";
            // cout<<"n.first: "<<n.first<<"   "<<"n.second: "<<n.second<<"\n";
        }

        return max((p.first-1)*(p.second-1),(p.first-1)*(p.second-1));
    }
};
