//import java.io.*;
//import java.util.Scanner; 
class Solution {
    public int numUniqueEmails(String[] emails) {
        	Scanner sc = new Scanner(System.in); 
        int ans=0;
        int len = emails.length;
        ArrayList<String> local=new ArrayList<String>();
            ArrayList<String> domain=new ArrayList<String>();
        HashSet<String> setlocal=new HashSet<String>();  
        HashSet<String> setdomain=new HashSet<String>();  
        for(int i=0;i<len;i++)
        {
           String[] sp = emails[i].split("@");
           
            
            
            for(int j=0;j<sp.length;j++)
        {
           if(j==0)
           {
               local.add(sp[j]);
               
           }
                else
                {
                    domain.add(sp[j]);
                    
                }
                
            
        }
        
            
        }
        for(int i=0;i<local.size();i++)
        {
           
    String temp = local.get(i);
            
            String[] sep = temp.split("\\+");
            
            String strnew = sep[0].replace(".", "");
            strnew = strnew + domain.get(i);
            
            setlocal.add(strnew);
            
            
        }
        
        
        ans = setlocal.size();
        
        return ans;
        
    }
}