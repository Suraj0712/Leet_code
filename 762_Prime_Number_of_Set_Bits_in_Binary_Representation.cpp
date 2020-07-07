class Solution {
public:
    int countPrimeSetBits(int L, int R) 
    {
        int ret = 0;
        int num = 0;
        int count =0;
        set<int> s ={2,3,5,7,11,13,17,19};
        
        for(int i = L; i<=R; i++)
        {
            num = i;
            count = 0;
            while(num>0)
            {
                if(num%2 == 1)
                {
                    count++;
                }
                num = num/2;
            }
            
            if(s.find(count) != s.end())
            {
                ret++;
            }
        }
        
        return ret;
    }
};
