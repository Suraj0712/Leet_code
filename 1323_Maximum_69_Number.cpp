class Solution {
public:
    int maximum69Number (int num) 
    {
        int order=0;
        int temp =num;
        int val=0;
        
        while(num/10>10)
        {
            num=num/10;
            order++;
            cout<<num<<"\n";
        }
        order++;
        cout<<order;
        
        val = temp/pow(10,order);
        
             
        while(val!=6 or )
        
        return num;
        
    }
};

