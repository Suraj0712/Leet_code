class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) 
    {
        int even = 0, odd = 0;
        
        for(auto i: chips)
        {
            if(i%2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        return min(even, odd);
    }
};
