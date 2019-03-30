#include <bits/stdc++.h>
using namespace std;


int main() 
{
	int n,x,cnt=0;
	cin>>n>>x;
	
	vector<int>a(n);
	map<int,int> mp;
	
	for(int i=0;i<n;i++)
	{
	    
	    cin>>a[i];
	    mp[a[i]] = i;
	    
	    
	}
	
		for(int i=0;i<n;i++)
	{
	    
	    for(int j=i+1;j<n;j++)
	    {
	        int temp = a[i]*a[j];
	        
	        int req= x/temp;
	        
	        auto it = mp.find(req);
	        
	     if(it!= mp.end() && it->second>i && it->second>j )
	        {
	            cnt++;
	            cout<<a[i]<<" "<<a[j]<<" "<<req<<endl;
	            
	            
	        }
	      
	        
	        
	    }
	    
	}
	
	
	cout<<cnt;
	
	
	
	
	
	return 0;
}