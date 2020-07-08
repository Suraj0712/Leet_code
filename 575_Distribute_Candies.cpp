class Solution {
public:
    int distributeCandies(vector<int>& candies) 
    {
        set<int> s;
        
        for(auto i: candies)
        {
            s.insert(i);
        }
        
        return min(s.size(), candies.size()/2);
//         map<int,int> m;
//         auto it = m.begin();
        
//         for(auto i: candies)
//         {
//             it = m.find(i);
//             if(it == m.end())
//             {
//                 pair<int,int> p(i,1);
//                 m.insert(p);
//             }
//             else
//             {
//                 it->second++;
//             }
//         }
        
//         if(m.size()<=candies.size()/2)
//         {
//             return m.size();
//         }
//         else
//         {
//             int ret = 0;
//             int one = 0;
            
//             for(auto i: m)
//             {
//                 if(i.second >=2)
//                 {
//                     ret++;
//                 }
//                 else
//                 {
//                     one++;
//                 }
//             }
            
//             int num = (candies.size()-(2*ret))-one;
            
//             if(one <= num)
//             {
//                 return ret+one;
//             }
//             else
//             {
//                 return ret + (one+num)/2;
//             }
//         }
    }
};


