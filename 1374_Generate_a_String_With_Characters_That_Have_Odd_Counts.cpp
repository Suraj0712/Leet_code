class Solution {
public:
    string generateTheString(int n) 
    {
        string s;
        int temp =0;
        if (n%2==0)
        {
            s=s+'z';
            temp++;
        }
        
        for(int i=temp; i<n; i++)
        {
            s=s +'a';
        }
        
        return s;
    }
};

