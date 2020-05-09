class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
     
        int slope,answer;
        int diffY = (coordinates[1][1] - coordinates[0][1]);
        if(diffY!=0){
         slope = (coordinates[1][0] - coordinates[0][0])/diffY;
     answer = 1;
        }
        else{
             slope = std::numeric_limits<int>::max();
             answer = 1; 
        }
       
        
        for(int i=1 ;i< coordinates.size()-1;i++){
            
            for(int j=0;j< coordinates[i].size()-1;j++){
                 int slopeCur;
                
                int diffCur = (coordinates[i+1][j+1] - coordinates[i][j+1]);
                if(diffCur!=0)
                 slopeCur= (coordinates[i+1][j] - coordinates[i][j])/diffCur;
                else
                     slopeCur = std::numeric_limits<int>::max();
                    
                       if(slope!=slopeCur) {
                    answer = 0;
                    return 0;
                }
                
                else{
                    slope = slopeCur;
                } 
                    
                    
                
                
            }
        }
        
        return 1;
    }
};