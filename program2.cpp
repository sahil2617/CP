// Question : given N elements, print all elements in the sorted manner.
// Input : 5
//         1 92 34 4 33
// Output : 1 4 33 34 92

#include<bits/stdc++.h>
using namespace std;       
int main(){
        int n;
        cin>> n;
        multiset <int> st;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            st.emplace(x);
        }
        for (auto it : st)
        {
            cout<<it<<" ";
        }
           
return 0;
}