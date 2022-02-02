#include<bits/stdc++.h>
using namespace std; 
int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int rvrs = 0;
            while(n!=0){
                int r = n%10;
                rvrs = (rvrs*10)+r;
                n/=10;
            }
            cout<<rvrs<<endl;
        }   
return 0;
}