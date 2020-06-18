class RecentCounter 
{
private:
    deque<int> dq;
    
public:
    RecentCounter() 
    {

    }
    
    int ping(int t) 
    {
        while(t>(*dq.begin())+3000)
        {
            if(dq.size()==0)
            {
                dq.push_back(t);
                return 1;
            }
            dq.pop_front();
        }
        dq.push_back(t);
        return dq.size();
    }
};
