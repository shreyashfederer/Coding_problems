class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        int cnt = 0;
        int answer = 0;
        int trustjudge = 0;
        
        unordered_map<int,int> visited;
        unordered_map<int,int> traversed;
        
        if(N==1){
            return 1;
        }
        for(int i=0;i<trust.size();i++){
            
            for(int j=0;j<trust[i].size()-1;j++){
                visited[trust[i][j]] = -1;
                if(visited.find(trust[i][j+1])==visited.end()){
                    
                    visited[trust[i][j+1]] = 1;
                    
                    
                }
                
                else {
                    
                    if(visited.find(trust[i][j+1])!=visited.end() && (visited[trust[i][j+1]] !=-1 ) ){
                        
                        visited[trust[i][j+1]] ++;
                        
                        
                        
                    }
                }
                
                if(visited.find(trust[i][j])!=visited.end()){
                    visited[trust[i][j]] = -1;
                    //return -1;
                }
                
               
            }
        }
        
        for (auto x : visited) 
        {
            
            cout<<x.first<<" "<<x.second<<endl;
            if(x.second == N-1){
                
                
                return x.first;
            }
        }
  
        
        return -1;
    }
};