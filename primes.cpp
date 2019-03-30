#include <iostream>
using namespace std;

int main() {
int n;

cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    
}
int count=0;

for(int i=0;i<n;i++){
   for(int j=2;j<=11;j++){
       if(a[i]%j==0&&a[i]!=j)
       count++;
       
   }
   if(count==1){
       cout<<"YES"<<endl;
       
   }
   else{
       cout<<"NO"<<endl;
       
   }
   count =0;
   
}

	return 0;
}