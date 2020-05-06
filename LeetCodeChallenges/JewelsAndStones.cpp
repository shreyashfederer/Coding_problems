class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        unordered_map<char,int> jewels;
        int count = 0;
        
        
        for(int i = 0;i<J.length();i++){
            
            jewels[J[i]] = 1;
        }
        
        for(int i=0;i<S.length();i++){
         
            if(jewels.find(S[i])!=jewels.end()){
                count++;
                
            }
        }
        
        return count;
        
    }
};



Question :- https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/
