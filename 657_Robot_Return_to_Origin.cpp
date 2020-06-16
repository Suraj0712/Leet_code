class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int* arr = new int[4];
        
        for(int i=0; i<4; i++)
        {
            arr[i] = 0;
        }
        
        for(auto i: moves)
        {
            if(i=='U')
            {
                arr[0]++;
            }
            else if(i == 'D')
            {
                arr[1]++;
            }
            else if(i == 'L')
            {
                arr[2]++;
            }
            else
            {
                arr[3]++;
            }
        }
        
        return (arr[1] ==arr[0] and arr[2] == arr[3]);
    }
};
