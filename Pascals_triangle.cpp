class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> v;
        vector<int> vinsert;
        vector<int> vprev;
        for(int i=0; i<numRows; i++)
        {
            vinsert.clear();
            if(i==0)
            {
                vinsert.push_back(1);
            }
            else if(i==1)
            {
                vinsert.push_back(1);
                vinsert.push_back(1);
                vprev = vinsert;
            }
            else
            {
                vinsert.push_back(1);
                for(int j=0; j<vprev.size()-1; j++)
                {
                    vinsert.push_back(vprev[j]+vprev[j+1]);
                }
                vinsert.push_back(1);
            }
            vprev = vinsert;
            v.push_back(vinsert);
        }
        return v;
    }
};
