class Solution {
public:
    // void printmap(map<int,int> m)
    // {
    //     cout<<"\n\n";
    //     for(auto i: m)
    //     {
    //         cout<<i.first<<" "<<i.second<<"\n";
    //     }
    // }
    int lastStoneWeight(vector<int>& stones) 
    {
        map<int, int> m;
        auto it = m.begin();
        
        for(auto i: stones)
        {
            it = m.find(i);
            if(it == m.end())
            {
                pair<int,int> p(i,1);
                m.insert(p);
            }
            else
            {
                it->second++;
            }
        }
        
        auto itr = m.rbegin();
        int key1, key2, val1, val2;
        
        while(itr!=m.rend())
        {
            
            // printmap(m);
            
            if(m.size() == 1)
            {
                if(itr -> second %2 ==0)
                {
                    return 0;
                }
                return itr->first;
            }

            key1 = itr->first;
            val1 = itr->second;

            if(val1 % 2 == 0)
            {
                m.erase(key1);
                itr = m.rbegin();
            }
            else if(val1 > 2)
            {
                itr->second = 1;
            }
            else
            {
                cout<<"else";
                m.erase(key1);
                itr = m.rbegin();
                key2 = itr->first;
                val2 = itr->second;
                // cout<<key1<<" "<<val1<<" ------- "<<key2<<" "<<val2<<"\n";
                
                if(val2 == 1)
                {
                    m.erase(key2);
                }
                else
                {
                    itr->second--;
                }
                
                m[key1-key2]++;
              
            }
            
            itr = m.rbegin();
            // cout<<m.size()<<"\n";
        }
        
        return 0;
    }
};
