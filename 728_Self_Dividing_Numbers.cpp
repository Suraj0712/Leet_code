class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> ret;
        string temp = " ";
        for(int i=left; i<=right; i++)
        {
            temp = to_string(i);
            bool flag = true;
            int digit;
            
            for(int j=0; j<temp.size(); j++)
            {
                digit = stoi(temp.substr(j,1));
                if(digit==0)
                {
                    flag = false;
                    break;
                }
                if(i%digit!=0)
                {
                    flag = false;
                    break;   
                }
            }
            
            if(flag)
            {
                ret.push_back(i);
            }
        }
        
        return ret;
    }
};
