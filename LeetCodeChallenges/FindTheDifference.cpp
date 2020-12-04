#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        
        sort(s.begin(),s.end());
        
        sort(t.begin(),t.end());
        
        int lenS = s.length();
        int lenT = t.length();
        
        char answer ;
        
        for(int i=0;i<lenS;i++){
            
            if(s[i]!=t[i]){
                answer = t[i];
                return answer;
            }
        }
      
        answer = t[lenT-1];
        
        
        return answer;
        
    }
};


//https://leetcode.com/problems/find-the-difference/
