class Solution {
public:
    string reverseWords(string s) 
    {
        string temp;
        string ret;
        int st=0;
        char tc;
        if(s == "")
        {
            return "";
        }
        
        for(int i=0; i<s.size(); i++)
        {
            // cout<<"st: "<<st<<"ed: "<<i<<"\n";
            if(s[i] == ' ')
            {
                temp = s.substr(st,i-(st));
                st=i+1;
                // cout<<"**"<<temp<<"**\n";
                
                for(int j=0; j<temp.size()/2; j++)
                {
                    // cout<<temp<<" - ";
                    swap(temp[temp.size()-(j+1)],temp[j]);
                }
                ret = ret+ " "+temp;
            }
            if(i == s.size()-1)
            {
                temp = s.substr(st,i-(st-1));
                // cout<<"**"<<temp<<"**\n";
                
                for(int j=0; j<temp.size()/2; j++)
                {
                    swap(temp[temp.size()-(j+1)],temp[j]);
                }
                ret = ret+ " "+temp;
            }            
        }
        
        // cout<<ret;
        return ret.substr(1,ret.size()-1);
    }
};
