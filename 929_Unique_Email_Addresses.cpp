class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        unordered_set<string> s;
        string temp = "";
        for(auto i: emails)
        {
            temp = "";
            bool b = true;
            for(auto it = i.begin(); it!=i.end(); it++)
            {
                if(*it == '+')
                {
                    while(*it != '@')
                    {
                        it++;
                    }
                }
                if(*it == '.' and b)
                {
                    continue;
                }
                if(*it == '@')
                {
                    b= false;
                }
                temp = temp + *it;
            }
            s.insert(temp);
            // cout<<temp<<"\n";
        }
        
        return s.size();
    }
};

