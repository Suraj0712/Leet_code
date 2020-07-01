class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) 
    {
        vector<string> words;
        vector<string> ret;
        int j=0;
        for(int i=0; i<text.size(); i++)
        {
            j=0;
            while(text[i+j] != ' ' and i+j<text.size())
            {
                j++;
            }
            if(i+j < text.size())
            {
                // cout<<"*"<<text.substr(i,j)<<"*\n";
                words.push_back(text.substr(i,j));
            }
            else
            {
                // cout<<"*"<<text.substr(i)<<"*\n";
                words.push_back(text.substr(i));
            }
            i = i+j;
            // words.push_back
        }
        
        for(int i=0; i<words.size(); i++)
        {
            if(words[i]==first and i+2<words.size())
            {
                if(words[i+1]==second)
                {
                    ret.push_back(words[i+2]);
                }
            }
        }
        return ret;
    }
};
