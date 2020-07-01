class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S)
    {
        vector<int> ret;
        int temp = 0;
        int linecount = 1;
        for(auto i: S)
        {
            temp = temp + widths[int(i-'a')];
            
            if(temp>100)
            {
                linecount++;
                temp  =  widths[int(i-'a')];
            }
        }
        ret.push_back(linecount);
        ret.push_back(temp);
        return ret;
    }
};

