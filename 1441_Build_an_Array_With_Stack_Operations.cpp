class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        
        vector<string> v;
        int diff=target[0] - 0;
        
        for(int i=0; i<target.size(); i++)
        {
            if(diff == 1)
            {
                // cout<<"if push \n";
                v.push_back("Push");
            }
            else
            {
                while(diff>1)
                {
                    // cout<<"while push pop \n";
                  v.push_back("Push");
                    v.push_back("Pop");
                    diff--;
                }
                // cout<<"else push \n";
                v.push_back("Push");
            }
            
            if(i+1 == target.size())
            {
                break;
            }
            diff = target[i+1]-target[i];
            
        }

        return v;        
    }
};
