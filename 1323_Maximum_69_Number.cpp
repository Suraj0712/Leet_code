// class Solution {
// public:
//     int maximum69Number (int num) 
//     {
//         vector<int> digits;
//         int ret_var=0;
//         bool flag =true;
        
//         while(num>0)
//         {
//             digits.push_back(num%10);
//             num = num/10;
            
//         }
        
//         for(auto i= digits.rbegin() ; i!=digits.rend(); ++i)
//         {
//             if(*i ==6 and flag)
//             {
//                 *i=9;
//                 flag=false;
//             }
//             ret_var = ret_var*10+*i;            
//         }         
//         return ret_var;      
//     }
// };

    string s = to_string(num) ;
    
    for (int i = 0 ; i < s.size() ; i++)
    {
        if (s[i] == '6')
        {
            s[i] = '9' ;
            break ;
        }
    }
    return stoi(s) ;
}
