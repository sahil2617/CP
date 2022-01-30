// Question: Given N elements, Print the element that occurs maximum no. of the times. 
// Input: 4
//        1 44 3 44

// Output: 44
#include<bits/stdc++.h>
using namespace std;
                      
int main(){
            
        int n,x;
        cin>>n;
        map<int,int> mpp;
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            mpp[x] = mpp[x] + 1;
            if (mpp[x] > mpp[max])
            {
                max = x;
            }
                      
        }
        cout<<max<<endl;
return 0;
}