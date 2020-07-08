class Solution {
public:
    int maxPower(string s) 
    {
        int count = 0;
        int ret = 0;
        
        for(int i =1; i<s.size(); i++)
        {
            if(s[i-1] == s[i])
            {
                count++;
            }
            else
            {
                if(ret<count)
                {
                    ret = count;
                }
                count =0;
            }
        }
        
        return max(ret,count)+1;
        
    }
};
