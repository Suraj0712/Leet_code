class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int temp =0;
        for(int i=0; i<nums.size(); i++)
        {
            temp = temp +nums[i];
            nums[i] = temp;
        }
        return nums;        
    }
};

