class Solution {
public:
    bool isPowerOfThree(int n) 
    {
//         while(n>0)
//         {
//             if(n==1)
//             {
//                 return true;
//             }
//             else if(n<3)
//             {
//                 return false;
//             }
            
//             if(n%3==0)
//             {
//                 n=n/3;
//             }
//             else
//             {
//                 return false;
//             }
//             cout<<n<<"vsvs";
            
//         }
//         return false;
        
        vector<int> three;
        long int i=1;
        while(i<=n)
        {
            three.push_back(i);
            i*=3;
        }
        
        return std::binary_search(three.begin(), three.end(), n);
        
        
    }
};
