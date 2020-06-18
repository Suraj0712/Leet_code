class Solution {
public:
    vector<int> diStringMatch(string S) 
    {
        int h = S.size();
        int l = 0;
        
        vector<int> ret;
        
        for(int i=0; i<S.size(); i++)
        {
            if(S[i] == 'D')
            {
                ret.push_back(h);
                h--;
            }
            else
            {
                ret.push_back(l);
                l++;
            }
        }
        ret.push_back(h);
        
       
        return ret;
    }
};
