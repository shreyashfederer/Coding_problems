#include <bits/stdc++.h>
using namespace std;

int main() 
{


int t;
cin>>t;

while(t--)
{
    
    string home,away,mid;
    
    int hg,ag;
    
    string top = " ";
    string top2 = " ";
    int temp = -1;
    int temp2 = INT_MIN;
    
    map<string,int>points;
     map<string,int>gd;
    map<string,int>::iterator it;
    map<string,int>::iterator it1;
    
    for(int i=0;i<12;i++)
    {
    cin>>home>>hg>>mid>>ag>>away;
    
    
    
    
   
        gd[home]+= hg-ag;
         gd[away]+= ag-hg;
         
         if(hg>ag)
         {
             points[home]+=3;
             
         }
         else if(ag>hg)
         {
             points[away]+=3;
             
         }
         else
         {
             points[home]+=1;
              points[away]+=1;
         }
        
    
    
    
    }
    
    for(it = points.begin();it!=points.end();it++)
    {
        if(it->second>temp)
        {
            
            
            temp = it->second;
            top = it->first;
            
        }
        else if(it->second==temp)
        {
            if(gd[it->first]>gd[top])
            {
                top = it->first;
                
            }
            
            
        }
    }
   // cout<<gd["arsenal"]<<" "<<gd["fcbarca"]<<endl;
    //cout<<points["arsenal"]<<" "<<points["fcbarca"]<<endl;
    
    points.erase(top);
    gd.erase(top);
    
     temp = -1;
     temp2 = INT_MIN;
    
    
    for(it = points.begin();it!=points.end();it++)
    {
        if(it->second>temp)
        {
            
            
            temp = it->second;
            top2 = it->first;
            
        }
        else if(it->second==temp)
        {
            if(gd[it->first]>gd[top2])
            {
                top2 = it->first;
                
            }
            
            
        }
    }
    
  cout<<top<<" "<<top2<<endl;
  gd.clear();
  points.clear();
  
}

	return 0;
}