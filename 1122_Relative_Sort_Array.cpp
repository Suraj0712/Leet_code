class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        unordered_map<int,int> m;
        auto it = m.begin();
        
        for(auto i: arr1)
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
        
        vector<int> ret;
        int temp=0;
        
        for(auto i: arr2)
        {
            it = m.find(i);

            while(it->second!=0)
            {
                ret.push_back(i);
                it->second--;
            }
            m.erase(it);
        }
               
        if(m.size()!=0)
        {
            map<int,int> mo;   
            for(auto it = m.begin(); it!=m.end(); it++)
            {
                pair<int,int> p(it->first,it->second);
                mo.insert(p);
            }
            m.clear();

            for(auto i: mo)
            {
                while(i.second!=0)
                {
                    ret.push_back(i.first);
                    i.second--;
                }
                m.erase(i.first);
            }
        }
        
        return ret;       
    }
};
