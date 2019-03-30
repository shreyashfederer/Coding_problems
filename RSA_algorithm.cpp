#include<bits/stdc++.h>
#include <sstream>  // for string streams
#include<math.h>
 
using namespace std;
 
//to find gcd
int gcd(int a, int h)
{
    int temp;
    while(1)
    {
        temp = a%h;
        if(temp==0)
        return h;
        a = h;
        h = temp;
    }
}

int power(int x, unsigned int y, int p) 
{ 
    int res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if(y%2==1)
        {
            res = (res*x) % p; 
        }
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 
  
// Returns find (a^b) % m 

int main()
{
    //2 random prime numbers
long long int p,q,e=2;
int msg;

cin>>p>>q>>msg;


    int n=p*q;
    int count;
    int totient = (p-1)*(q-1);
 
    //public key
    //e stands for encrypt
   // int e=7;
 
    //for checking co-prime which satisfies e>1
    while(e<totient){
    count = gcd(e,totient);
    if(count==1)
        break;
    else
        e++;
    }
 
    //private key
    //d stands for decrypt
    int d;
 
    //k can be any arbitrary value
   // double k = 2;
 
    //choosing d such that it satisfies d*e = 1 + k * totient
   
   for(int i=0;i<100000;i++)
   {
    d = ((totient*i) + 1)/e;
    if(e*d%totient==1)
    {
        break;
        
    }
   }
   
    
    int c = power(msg,e,n);
     
int m = power(c,d,n);
  
 
    cout<<"Message data = "<<msg;
    cout<<"\n"<<"p = "<<p;
    cout<<"\n"<<"q = "<<q;
    cout<<"\n"<<"n = pq = "<<n;
    cout<<"\n"<<"totient = "<<totient;
    cout<<"\n"<<"e = "<<e;
    cout<<"\n"<<"d = "<<d;
    cout<<"\n"<<"Encrypted data = "<<c;
    cout<<"\n"<<"Original Message sent = "<<m;
 
    return 0;
}