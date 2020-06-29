class Solution {
public:
    
    int numSpecialEquivGroups(vector<string>& A) 
    {
        map<char,int> mo, tempo;
        map<char,int> me, tempe;  
        auto it = me.begin();
        
        vector<map<char,int> > v;
        bool flag = true;
        
        vector<int> index;
        cout<<"1";
        for(int i=0; i<A.size(); i++)
        {

            mo.clear(); me.clear(); flag = true;
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

            for(int i=0; i<v.size()-1; i+=2)
            {                
                // tempo = v[i+1];
                // tempe = v[i];
                
                if(v[i] == me or v[i+1] == mo)
                {
                    flag = false;
                    break;
                }
            }

            if(!flag or v.size()==0)
            {
                v.push_back(me);
                v.push_back(mo);
            }
        }
        
        return v.size()/2;
    }
};
