class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        auto it = *max_element(std::begin(candies), std::end(candies));
        // cout<<*it;
        
        vector<bool> v;

        for(auto t = candies.begin(); t!=candies.end(); t++)
        {
            if((*t+extraCandies)>=it)
            {
                v.push_back(true);
            }
            else
            {
                v.push_back(false);
            }   
        }
        return v;
    }
};