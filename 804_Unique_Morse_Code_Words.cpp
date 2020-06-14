class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
        unordered_set<string> uniques;
        int ascii = 0;
        string temp ="";
        for(auto i: words)
        {
            temp ="";
            for(auto j: i)
            {
                ascii = int(j);
                temp = temp+morse[ascii-97];
            }
            uniques.insert(temp);
        }

        return uniques.size();
    }
};
