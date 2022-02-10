#include<bits/stdc++.h>
using namespace std;
            
            
int main(){
            
        int t;
        cin>>t;
        while(t--){
            int n,x;
            cin>>n>>x;
           
          if (x<=n)
            {
                cout<<x<<endl;
            }
            else{
                cout<<x%(n+1)<<endl;
            }
          
            
            
        }
            
return 0;
}   