class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        if(needle =="")
        {
            return 0;
        }
        int nsize = needle.size();
        int nhay = haystack.size();
        
        for(int i=0; i<=(nhay-nsize); i++)
        {
            if(haystack[i] == needle[0])
            {
                bool flag =true;
                for(int j=1; j<nsize; j++)
                {
                    if(haystack[i+j] != needle[j])
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};
