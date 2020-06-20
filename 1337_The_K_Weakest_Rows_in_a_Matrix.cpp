class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
       
        vector<int> count;
        vector<int> index;
        int row_count;
        
        for(auto i: mat)
        {
            row_count = std::count(i.begin(),i.end(),1);
            count.push_back(row_count);
        }
        
        for(int i=0; i<k; i++)
        {
            index.push_back(min_element(count.begin(),count.end()) - count.begin());
            *min_element(count.begin(),count.end()) = INT_MAX;
            
        }
        
    
            return index;
    }
};

