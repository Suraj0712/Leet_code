class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        vector<int> indices;
        
        int temp =0;
        auto it = arr.begin();
        auto check = arr.begin();
        
        for(int i=temp; i<arr.size(); i++)
        {
            check = arr.begin();
            advance(check,temp);
            cout<<check-arr.begin()<<" --- "<<arr.end()-arr.begin()<<"\n";
            it = max_element(check,arr.end());

            temp = it-arr.begin(); 
            indices.push_back(temp);
            
            temp++;

            if(temp == arr.size())
            {
                break;
            }  
        }
        
        temp =0;
        
        for(auto i: indices)
        {
            for(int j=temp; j<i; j++)
            {
                arr[j] = arr[i];
            }
            temp = i;
        }
        
        arr[arr.size()-1] = -1;
        return arr;
    }
};
