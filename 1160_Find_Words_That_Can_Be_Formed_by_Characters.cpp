class Solution {
public:
    int countCharacters(vector<string>& words, string chars) 
    {
        unordered_map<char,int>m;
        unordered_map<char,int>m_check;
        auto it = m.begin();
        
        for(auto i: chars)
        {
            it = m.find(i);
            if(it == m.end())
            {
                pair<char,int> p(i,1);
                m.insert(p);
            }
            else
            {
                it->second++;
            }
        }
              
        int i=0;
        bool flag = true;
        for(auto word: words)
        {
            flag = true;
            m_check.clear();
            for(auto i: word)
            {
                it=m_check.find(i);
                if(it == m_check.end())
                {
                    pair<char,int> p(i,1);
                    m_check.insert(p);
                }
                else
                {
                    it->second++;
                }
            }

            for(auto i: m_check)
            {
                it = m.find(i.first);
                if(it == m.end())
                {
                    flag = false;
                    break;
                }
                else
                {
                    if(it->second<i.second)
                    {
                        flag=false;
                        break;
                    }
                }
            }
            
            
            if(flag)
            {
                i+=word.size();
            }
        }
        
        return i;
    }
};
