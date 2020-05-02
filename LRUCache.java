/*package whatever //do not write package name here */


import java.io.*; 
import java.util.*; 
class GFG {
	public static void main (String[] args) {
	
	int n = 4;
	
	
	ArrayList<Integer> cache = new ArrayList<Integer>();
	
	Scanner sc = new Scanner(System.in); 
	
	int input_size = sc.nextInt();
	
	System.out.println(input_size);
	
	for (int i=0;i<input_size;i++){
	    
	    int data = sc.nextInt();
	    
	    if(cache.size()<n){
	        if(cache.contains(data)){
	            int cacheHitValue = cache.indexOf(data);
	            cache.remove(cacheHitValue);
	            cache.add(data);
	        }
	        else{
	            cache.add(data);
	        }
	    }
	    
	    else{
	        
	        if(cache.contains(data)){
	            int cacheHitValue = cache.indexOf(data);
	            cache.remove(cacheHitValue);
	            cache.add(data);
	        }
	        
	        else{
	            
	            cache.remove(0);
	            cache.add(data);
	            
	        }
	        
	        
	    }
	    
	}
  
	
	for (int i=0; i<cache.size(); i++) {
            System.out.print(cache.get(i)+" "); 
    } 
	
	}
}