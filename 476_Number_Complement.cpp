class Solution {
public:
    int findComplement(int num) 
    {
        int ret =0;
        int count = 0;
        while(num>0)
        {
            if(num%2 == 0)
            {
                ret = ret + pow(2,count);
            }
            count++;
            num = num/2;
        }
        return ret;
        
    }
};
