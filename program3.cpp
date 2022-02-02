// Find the index of the very first occurence of an element. 
#include<bits/stdc++.h>
using namespace std;
            
        //   Method 1  
// int main(){
            
//         vector<int> vec = {21,442,23434,22,241,56,876};

//         sort(vec.begin(), vec.end());

//         if (binary_search(vec.begin(), vec.end(), 21))//First we'll check Whether the element is present or not.
//         {
//             int index = lower_bound(vec.begin(), vec.end(), 21) - vec.begin();//if it is present we will fetch the index.
//             cout<<"Element found at index :"<<index;
//         }
//         else{
//             cout<<"Element not found";
//         }
            
// return 0;
// } 
    // method 2
int main(){
            
        vector<int> vec = {21,442,23434,22,241,56,876};
        int x = 21;
        sort(vec.begin(), vec.end());
        int index = lower_bound(vec.begin(), vec.end(), x) - vec.begin();
        if (index <  vec.size() && vec[index] == x)
        {
           cout<<"Element found at index :"<<index;
        }
        
        else{
            cout<<"Element not found";
        }
            
return 0;
} 

//** Find function could also have worked for this question but that takes O(N) time complexity.
//** Method 1 : BinarySearch and LowerBound functions both takes O(logN) so it sums up to O(2LogN), which is
//   comparitively faster than find function..
//** Method 2 : lowerBound function only takes O(LogN), which is faster than above 2 methods.