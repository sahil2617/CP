#include<bits/stdc++.h>
using namespace std;
            
            
int main(){
        int t;
        cin>>t;
        while(t--){    
        int n;
        cin>>n;
        vector< pair <int,int> > vect;
        set<int> onX;
        set<int> onY;
        for (int i = 0; i < n; i++)
        {   
            int x,y;
            cin>>x>>y;
            vect.emplace_back( make_pair(x,y) );
        }
        for (auto it : vect)
        {
            onX.emplace(it.first);
            onY.emplace(it.second);
        }
        int distinctLine = onX.size()+onY.size();
        cout<<distinctLine<<endl;
        }
return 0;
}