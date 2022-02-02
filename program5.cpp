// Find the number of times X appears in an array or vector. 

#include<bits/stdc++.h>
using namespace std;
            
            
int main(){
            
        vector<int> vec = {2,3423,4,2,3,2,4,1,4,3};
        int x = 342;
        sort(vec.begin(), vec.end());

        auto lowerBound = lower_bound(vec.begin(), vec.end(), x);
        auto upperBound = upper_bound(vec.begin(), vec.end(), x);
        int noOfOccurence = upperBound - lowerBound;
        cout<<x<<" appears "<<noOfOccurence<<" times.";
            
return 0;
}