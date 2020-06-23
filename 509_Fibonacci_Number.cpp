class Solution {
public:
    int fib(int N) 
    {
        if(N==0){return 0;}
        if(N==1 or N==2){return 1;}
        
        int first = 1;
        int second = 1;
        int temp ;
        
        for(int i=0; i<N-2;i++)
        {
            temp = first;
            first = second;
            second = temp + second;
            // cout<<second<<" ";
        }
        return second;
        
    }
};
