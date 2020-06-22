class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d)
    {        
        int count=0;
        
        sort(arr2.begin(),arr2.end());

        auto it = arr2.begin();
        
        for(auto i: arr1)
        {
            it = lower_bound(arr2.begin(),arr2.end(),i-d);
            if(it== arr2.end() or *it>i+d)
            {
                count++;
            }
        }
        
        return count;
    }
};
