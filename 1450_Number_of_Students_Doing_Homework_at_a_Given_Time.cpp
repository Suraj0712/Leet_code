class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) 
    {      
        int min_value=0, max_value=0;
        
        min_value = *std::min_element(startTime.begin(), startTime.end());
        max_value = *std::max_element(endTime.begin(), endTime.end());
        
        // cout<<min_value<<"   ---   "<<max_value<<"\n";
        vector<int> v;
        v.resize(max_value-min_value+1);
        // cout<<v.size();
        // cout<<"\n";
        
        for(int i=0; i<startTime.size(); i++)
        {
            for(int j=startTime[i]; j<=endTime[i]; j++)
            {
                // cout<<j<<"uiygvk";
                v[j-min_value] = v[j-min_value]+1;
            }
            // cout<<"\n"<< i<<" \n";
        }
        // cout<<min_value<<"   "<<max_value;
        
        // for(auto i: v)
        // {
        //     cout<<i<<" ";
        // }
        if(queryTime-min_value< 0 or queryTime-min_value>=v.size())
        {
            return 0;
        }
        else
        {
            return v[queryTime-min_value];
        }
    }
};

