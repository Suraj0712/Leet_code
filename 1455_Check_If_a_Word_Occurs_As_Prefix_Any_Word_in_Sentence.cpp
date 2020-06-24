class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) 
    {
        int size = searchWord.size();
        int st=-1,ed=-1;
        
        vector<string> v;
        
        for(int i=0; i<sentence.size(); i++)
        {
            if(sentence[i] == ' ')
            {
                st = ed;
                ed = i;
                

                    v.push_back(sentence.substr(st+1,ed-(st+1)));

            }
        }
        
        v.push_back(sentence.substr(ed+1));
        
        string temp = "";
        int count =0;
        for(auto i: v)
        {
            count++;
            temp = i.substr(0, size);
            if(temp == searchWord)
            {
                return count;
            }
        }
        return -1;
    }
};
