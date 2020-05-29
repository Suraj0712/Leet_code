class Solution {
public:
    int romanToInt(string s) 
    {
        int ret_int=0;
        int prev_int=0;
        char temp = 'Z';
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == 'I')
            {
                ret_int= ret_int+1;
                temp='I';
            }
            else if(s[i] == 'V')
            {
                if(temp == 'I')
                {
                    ret_int = ret_int - 1 + 4;
                }
                else
                {
                    ret_int = ret_int + 5;
                }
            }
            else if(s[i] == 'X')
            {
                if(temp == 'I')
                {
                    ret_int = ret_int - 1 + 9;
                }
                else
                {
                    ret_int = ret_int + 10;
                }
            }
            
            else if(s[i] == 'L')
            {
                if(temp == 'X')
                {
                    ret_int = ret_int - 10 + 40;
                }
                else
                {
                    ret_int = ret_int + 50;
                }
            }
            
            else if(s[i] == 'C')
            {
                if(temp == 'X')
                {
                    ret_int = ret_int - 10 + 90;
                }
                else
                {
                    ret_int = ret_int + 100;
                }
            }
            else if(s[i] == 'D')
            {
                if(temp == 'C')
                {
                    ret_int = ret_int - 100 + 400;
                }
                else
                {
                    ret_int = ret_int + 500;
                }
            }
            
            else if(s[i] == 'M')
            {
                if(temp == 'C')
                {
                    ret_int = ret_int - 100 + 900;
                }
                else
                {
                    ret_int = ret_int + 1000;
                }
            }            
            
            
            temp = s[i];
 
        }
            
        return ret_int;
        
    }
};