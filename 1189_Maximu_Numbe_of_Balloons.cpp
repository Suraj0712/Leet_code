class Solution {
public:
    int maxNumberOfBalloons(string text) 
    {
        vector<int> v;
        v.resize(5);
        
        for(auto c : text)
        {
            if(c == 'b')
            {
                v[0]++;
            }
            if(c == 'a')
            {
                v[1]++;
            }
            if(c == 'l')
            {
                v[2]++;
            }
            if(c == 'o')
            {
                v[3]++;
            }
            if(c == 'n')
            {
                v[4]++;
            }
        }
        v[2] = v[2]/2;
        v[3] = v[3]/2;
        
        return *min_element(v.begin(),v.end());
        
    }
};
