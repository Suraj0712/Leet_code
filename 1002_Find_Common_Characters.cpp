class Solution {
public:
    vector<string> commonChars(vector<string>& A) 
    {
        vector<int> c1(26,INT_MAX);
        vector<int> c2(26,0);
        int temp;
                  
        for(auto i: A)
        {
            c2.clear(); c2.resize(26);
            for(int j=0; j<i.size(); j++)
            {
                temp = int(i[j] - 'a');
                c2[temp]++;
            }
            for(int k=0; k<26;k++)
            {
                c1[k] = min(c2[k], c1[k]);
            }
        }
        
        vector<string> ret;
        string t;
        for(int i=0; i<26; i++)
        {
            if(c1[i]!=0)
            {
                while(c1[i]!=0)
                {
                    c1[i]--;
                    t = char('a'+i);
                    ret.push_back(t);
                }
            }
        }
        return ret;
    }
};

