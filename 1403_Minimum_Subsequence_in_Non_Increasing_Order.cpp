class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int sum = 0;
        int cut_off = floor(accumulate(nums.begin(), nums.end(),0) /2)+1;
        
        vector<int> vec;
        
        for(auto it = nums.rbegin(); it!=nums.rend(); it++)
        {
            if(sum<cut_off)
            {
                sum = sum+*it;
                vec.push_back(*it);
            }
            else
            {
                break;
            }
        }
        return vec;
//         int cut_off = floor(accumulate(nums.begin(), nums.end(),0) /2)+1;
//         vector<int> ret_vec;
//         int begin=0;
//         int end =0;
//         int sum=0;
//         bool flag = false;
        
//         for(int i=0 ; i<nums.size(); i++)
//         {
//             cout<<"while start \n";
//             while(sum<cut_off)
//             {
//                 if(end == nums.size() and sum<cut_off)
//                 {
//                     flag = true;
//                     break;
//                 }
//                 sum = sum + nums[end];
//                 end++;

//                 cout<<sum<<" "<<end<<"\n";
//             }
//             cout<<"while end \n";
//             if(flag){break;}
//             cout<<begin<<" "<<end<<"\n";
            
//             ret_vec.push_back(end);
//             sum = sum - nums[begin];
//             begin++;
//         }
        
//         for(int i=0; i<ret_vec.size(); i++)
//         {
//             ret_vec[i] =  ret_vec[i]-i;
//         }
        
//         // for(auto i: ret_vec)
//         // {
//         //     cout<<i<<" ";
//         // }
        
//         int min_ele = *min_element(ret_vec.begin(),ret_vec.end());
//         cout<<min_ele;
        
//         vector<int> candidate;
//         sum = INT_MIN;
//         int index;
//         for(int i=0; i<ret_vec.size(); i++)
//         {
//             if(ret_vec[i] ==min_ele)
//             {
//                 if(accumulate(nums.begin()+i, nums.begin()+i+min_ele,0)>sum)
//                 {
//                     sum = accumulate(nums.begin()+i, nums.begin()+i+min_ele,0);
//                     index = i;
//                 }
//             }
//         }
        
//         vector<int> veccc(nums.begin() + index, nums.begin()+index+min_ele) ;
//         sort(veccc.begin(),veccc.end());
//         std::reverse(veccc.begin(), veccc.end());
//         return veccc;
    }
};

