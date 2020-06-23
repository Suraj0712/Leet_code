class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        vector<vector<int>> ret;
        sort(arr.begin(), arr.end());
        int diff= INT_MAX;
        int index;
        
        for(int i=1; i<arr.size(); i++)
        {
            if(diff > arr[i] - arr[i-1])
            {
                diff = arr[i] - arr[i-1];
                index = i-1;
            }
        }
        
        cout<<diff<<" "<<index<<"\n";
        vector<int> v;
        for(int i = index; i<arr.size()-1; i++)
        {
            if(arr[i+1] - arr[i] == diff)
            {
                v.clear();
                v.push_back(arr[i]);
                v.push_back(arr[i+1]);
                ret.push_back(v);
            }
        }
        
        return ret;
        
    }
};

