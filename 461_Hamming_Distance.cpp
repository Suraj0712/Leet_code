class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        vector<int> xv;
        vector<int> yv;
        
        while(x>0)
        {
            xv.push_back(x%2);
            x = x/2;
        }
        
        while(y>0)
        {
            yv.push_back(y%2);
            y = y/2;
        }
        
        int size = min(xv.size(),yv.size());
        int count = 0;
        
        for(int i=0; i<size; i++)
        {
            if(xv[i] !=yv[i])
            {
                count++;
            }
        }

        if(xv.size()>yv.size())
        {
            auto it = xv.begin();
            advance(it,size);
            count = count +std::count(it,xv.end(),1);            
        }
        else if(xv.size()<yv.size())
        {
            auto it = yv.begin();
            advance(it,size);
            count = count +std::count(it,yv.end(),1);
        }
        
        return count;
    }
};
