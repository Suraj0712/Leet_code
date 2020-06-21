class Solution {
public:
    string removeDuplicates(string S) 
    {
//         int j=0;
//         string temp="";
//         for(int i=1; i<S.size(); i++)
//         {
//             // cout<<"Before: "<<S<<"\n";
//             if(S[i] == S[i-1] and S[i] != 'A')
//             {
//                 j=0;
//                 temp = "";
//                 while((i-1)-j>=0 and i+j<S.size() and S[i+j]==S[(i-1)-j])
//                 {
//                     // cout<<"i: "<<i<<" "<<"j: "<<j<<"\n";/
//                     j++;
//                     temp = temp + "AA";
//                 }
//                 S = S.substr(0,i-j)+ temp + S.substr(i+j);
//             }
//             // cout<<"After: "<<S<<"\n";
//         }
        
//         temp = "";
        
        
        
//         for(int i=1; i<S.size(); i++)
//         {
//             if(S[i-1] != S[i] and S[i]!='A')
//             {
//                 temp =temp + S[i];
//             }
//         }
        
//         if(S[0]!='A')
//         {
//             temp = S[0] + temp;
//         }
//         // cout<<"Temp Afetr: "<<temp;
//         return temp;
        
        stack<char> st;
        
        for(auto i: S)
        {
            if(!st.empty() and i==st.top())
            {
                st.pop();
            }
            else
            {
                st.push(i);
            }
        }
        
        string ret="";
        
        while(!st.empty())
        {
            ret = st.top() + ret;
            st.pop();
        }
        
        return ret;
    }
};

