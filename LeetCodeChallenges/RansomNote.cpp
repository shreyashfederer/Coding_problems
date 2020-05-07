class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int cnt[26] = {0};
        int cnt1[26] = {0};
        int ans = 1;
        
        for(int i=0;i<ransomNote.length();i++){
            
            cnt[ransomNote[i]-'a']++;
           
        }
        
        
         for(int i=0;i<magazine.length();i++){
            
            
            cnt1[magazine[i] - 'a']++;
            
        }
        
        
        for(int i=0;i<26;i++){
            
            
           if(cnt[i]>cnt1[i]){
               ans = 0;
               break;
               
               
           }
            
        }

        
      return ans;  
    }
};



//https://leetcode.com/explore/featured/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/