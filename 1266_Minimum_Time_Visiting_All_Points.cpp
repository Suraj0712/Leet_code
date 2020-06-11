// class Solution {
// public:
//     int minTimeToVisitAllPoints(vector<vector<int>>& points) 
//     {
//         int distance =0;
//         int x_cur,x_nxt,y_cur,y_nxt;
        
//         for(int i=0; i<points.size()-1; ++i)
//         {
//             x_cur = points[i][0];
//             y_cur = points[i][1];
//             x_nxt = points[i+1][0];
//             y_nxt = points[i+1][1];
            
//             while(x_cur!=x_nxt or y_cur!=y_nxt )
//             {
//                 if(x_cur>x_nxt)
//                 {
//                     x_cur--;
//                 }
//                 else if(x_cur<x_nxt)
//                 {
//                     x_cur++;
//                 }
                
//                 if(y_cur>y_nxt)
//                 {
//                     y_cur--;
//                 }
//                 else if(y_cur<y_nxt)
//                 {
//                     y_cur++;
//                 }
//                 distance++;
//             }
            
//             if(x_cur==x_nxt)
//             {
//                 distance = distance + abs(y_cur-y_nxt);
//             }
//             else if(y_cur==y_nxt)
//             {
//                 distance = distance + abs(x_cur-x_nxt);
//             }
//         }
        
//         return distance;
//     }
    
    
// };

class Solution {
    int distance(int x1, int y1, int x2, int y2) {
        return max(abs(x1 - x2), abs(y1 - y2));
    }
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        
        int n = points.size();
        int x1, y1, x2, y2;
        
        for(int i = 1; i < n; ++i) {
            x1 = points[i-1][0];
            y1 = points[i-1][1];
            x2 = points[i][0];
            y2 = points[i][1];
            ans += distance(x1, y1, x2, y2);
            
        }
        
        return ans;
    }
};

