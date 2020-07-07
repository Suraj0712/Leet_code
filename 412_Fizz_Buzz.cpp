class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> ret;
        string s = "";
        for(int i=1; i<=n; i++)
        {
            s = "";
            if(i%3 ==0)
            {
                s = s + "Fizz";
            }
            if(i%5 ==0)
            {
                s = s + "Buzz";
            }
            
            if(s == "")
            {
                s = to_string(i);
            }
            ret.push_back(s);           
        }
        return ret;
    }
};
