class Solution {
public:
    bool divisorGame(int N) 
    {
        string s1 = "wert";
        string s2 = "rtwe";
        
        for(int j=0; j<A[i].size(); j++)
        {
            if(j%2 ==0)
            {
                it = me.find(A[i][j]);
                {
                    if(it == me.end())
                    {
                        pair<char,int> p(A[i][j], 1);
                        me.insert(p);
                    }
                    else
                    {
                        it->second++;
                    }
                }
            }
            else
            {
                it = mo.find(A[i][j]);
                {
                    if(it == mo.end())
                    {
                        pair<char,int> p(A[i][j], 1);
                        mo.insert(p);
                    }
                    else
                    {
                        it->second++;
                    }
                } 
            }
        }
        return (N%2 ==0);
    }
};
