class Solution {
public:
    string sortString(string s) 
    {
        map<char, int> m;
        auto it = m.begin();
        
        for(int i=0; i<s.size(); i++)
        {
            it = m.find(s[i]);
            if(it == m.end())
            {
                pair<char,int> p(s[i],1);
                m.insert(p);
            }
            else
            {
                it->second++;
            }
        }
        
        // for(auto i: m)
        // {
        //     cout<<i.first<<" "<<i.second<<"\n";
        // }
        
        string ret ="";
        
        while(m.size()!=0)
        {
            for(auto it =m.begin(); it!=m.end(); it++)
            {
                if(it->second >0)
                {
                    ret = ret + it->first;
                    it->second--;
                    // if(it->second ==0)
                    // {
                    //     m.erase(it->first);
                    // }
                }
            }
            // cout<<ret<<"   ";
            for(auto it =m.rbegin(); it!=m.rend(); it++)
            {
                if(it->second >0)
                {
                    ret = ret + it->first;
                    it->second--;
                    // if(it->second ==0)
                    // {
                    //     m.erase(it->first);
                    // }
                }
            }
            // cout<<ret<<"\n";
            for(auto it =m.begin(); it!=m.end(); it++)
            {
                if(it->second ==0)
                {
                    m.erase(it->first);
                }
            }
            // for(auto i: m)
            // {
            //     cout<<i.first<<" "<<i.second<<"\n";
            // }

        }
        
        return ret;
    }
};

