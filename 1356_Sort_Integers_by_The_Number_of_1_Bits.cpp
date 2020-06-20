class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) 
    {
        
        sort(arr.begin(),arr.end());
        vector<int> count_one;
        int temp;
        int count;
        for(int i=0; i<arr.size(); i++)
        {
            count=0;
            temp = arr[i];
            while(temp>0)
            {
                if(temp%2 == 1)
                {
                    count++;
                }
                temp = temp/2;
            }
            count_one.push_back(count);
        }
        
        for(auto i: count_one)
        {
            cout<<i<<" ";
        }
        
        int max = *max_element(count_one.begin(),count_one.end());
        
        temp =0;
        vector<int> ret;
        
        for(int i=0; i<=max; i++)
        {
            for(int j=0; j<count_one.size(); j++)
            {
                if(count_one[j] == i)
                {
                    ret.push_back(arr[j]);
                }
            }
        }
        
        return ret;
    }
};
