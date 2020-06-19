class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) 
    {
        unordered_map<string,int> m;
        vector<int> v;
        int temp;
        string temp_str;
        auto it = m.begin();
        for(auto i: cpdomains)
        {
            v.clear();
            for(int j=0; j<i.size(); j++)
            {
                if(i[j] == ' ')
                {
                    temp = stoi(i.substr(0,j));
                    v.push_back(j);
                }
                
                if(i[j] =='.')
                {
                    v.push_back(j);
                }
            }
            
            for(auto val: v)
            {
                it = m.find(i.substr(val+1,i.size()));
                
                if(it==m.end())
                {
                    pair<string, int>p(i.substr(val+1,i.size()),temp);
                    m.insert(p);
                }
                else
                {
                    it->second = it->second + temp;
                }
            }
            

        }
        cpdomains.clear();
        
        for(auto i: m)
        {
            cpdomains.push_back(to_string(i.second)+" "+i.first);
        }
        
        return cpdomains;
    }
};
