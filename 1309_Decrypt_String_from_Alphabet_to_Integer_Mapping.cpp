class Solution {
public:
    string freqAlphabets(string s) 
    {
        string temp="";
        string ret = "";
        int id; 
        for(int i=0; i<s.size(); i++)
        {
            temp =s.substr(i,1);
            
            if(i+2<s.size())
            {
                if(s[i+2]=='#')
                {
                    temp=s.substr(i,2);
                    i+=2;                    
                }
            }
            
            id = stoi(temp)+96;           
            ret = ret+(char)id;   
        }
        
        return ret;
    }
};

