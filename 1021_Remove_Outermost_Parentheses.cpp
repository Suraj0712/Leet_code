class Solution {
public:
    string removeOuterParentheses(string S) 
    {
        stack<char> st;
        vector<int> index;
        index.push_back(0);
        
        int count=0;
        for(auto i: S)
        {
            if(i=='(')
            {
                st.push(i);
            }
            else
            {
                if(st.top()=='(')
                {
                    st.pop();
                }
                else
                {
                    cout<<"invalid sequesnce";
                }
            }
            count++;
            if(st.size()==0)
            {
                index.push_back(count);
            }
        }
        
        string ret_string ="";
        string temp_string ="";
        
        for(int i=0; i<index.size()-1; i++)
        {
            cout<<i<<"  ";
            temp_string = S.substr(index[i], index[i+1]-index[i]);
            if(temp_string.size() ==2)
            {
                // ret_string = ret_string+"()";
            }
            else
            {
                ret_string = ret_string+temp_string.substr(1,temp_string.size()-2);
            }
        }
                
        return ret_string;
        
    }
};

