class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0)
    {
        deque<vector<int>> dq;
        vector<vector<int>> exp;
        
        vector<int> p;
        p.push_back(r0);
        p.push_back(c0);
        
        exp.push_back(p);
        dq.push_back(p);
        vector<int> current,temp;
        auto it = exp.begin();
        while(dq.size()!=0 or exp.size() < R*C)
        {
            current = dq.front();
            dq.pop_front();
            
            if(current[0]+1<R)
            {
                temp.push_back(current[0]+1);
                temp.push_back(current[1]);
                it = find(exp.begin(), exp.end(), temp);
                if(it == exp.end())
                {
                    exp.push_back(temp);
                    dq.push_back(temp);
                }
                
            }
            temp.clear();
            
            if(current[0]-1>=0)
            {
                temp.push_back(current[0]-1);
                temp.push_back(current[1]);
                it = find(exp.begin(), exp.end(), temp);
                if(it == exp.end())
                {
                    exp.push_back(temp);
                    dq.push_back(temp);
                }                
            }
            temp.clear();
            
            if(current[1]+1<C)
            {
                temp.push_back(current[0]);
                temp.push_back(current[1]+1);
                it = find(exp.begin(), exp.end(), temp);
                if(it == exp.end())
                {
                    exp.push_back(temp);
                    dq.push_back(temp);
                }                
            }
            temp.clear();
            
            if(current[1]-1>=0)
            {
                temp.push_back(current[0]);
                temp.push_back(current[1]-1);
                it = find(exp.begin(), exp.end(), temp);
                if(it == exp.end())
                {
                    exp.push_back(temp);
                    dq.push_back(temp);
                }
            }
            temp.clear();
        }

    
        
        return exp;
    }
};


