class Solution {
public:
    string toLowerCase(string str) 
    {       
        for(int i=0; i<str.size(); ++i)
        {
           if(str[i]<='Z' and str[i]>='A')
           {
               str[i] = str[i]+32;
           }
        }
        return str;
    }
};
