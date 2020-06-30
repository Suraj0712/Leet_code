class Solution {
public:
    vector<int> shortestToChar(string S, char C) 
    {
        vector<int> ret(S.size(),INT_MAX); 
        vector<int> index;
    
        for(int i=0; i<S.size(); i++)
        {
            if(S[i] == C)
            {
                index.push_back(i);
                ret[i] = 0;
            }
        }
        
        int count =0;
        for(int i=index[0]; i>=0; i--)
        {
            ret[i] = count;
            count++;
        }

        int first,second;
        for(int i=0; i<index.size()-1; i++)
        {
            first = index[i];
            second = index[i+1];
            
            for(int j=0; j<(second-first)/2; j++)
            {
                ret[second-(j+1)] = j+1;
                ret[first + (j+1)] = j+1;
                // cout<<"first: "<<first<<"   second: "<<second<<"   j: " <<j<<"\n";
            }
        }
        
        count =0;
        
        for(int i=*index.rbegin(); i<ret.size(); i++)
        {
            ret[i] = count;
            count++;
        }
        
        return ret;
        
    }
};

