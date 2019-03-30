
#include <bits/stdc++.h>
using namespace std;
int result(int a,int b){
    
    return a^b;
    
}

int main()
{
int n;
cin>>n;

int req=1;

for(int i=2;i<=n;i++){
 req=result(req,i);

}

cout<<req;

	return 0;
}
