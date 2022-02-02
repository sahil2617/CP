// Find the last occurence of an element. 
 #include<bits/stdc++.h>
 using namespace std;
             
// Method 1          
//  int main(){        
//          vector<int> vec = {22,442,442,22,241,56,876};
//         int x = 22;
//         sort(vec.begin(), vec.end());

//         if (binary_search(vec.begin(), vec.end(), x))//First we'll check Whether the element is present or not.
//         {
//             int index = upper_bound(vec.begin(), vec.end(), x) - vec.begin();//if it is present we will fetch the index.
//             cout<<"Last occurence of an Element found at index :"<<index-1;
//         }
//         else{
//             cout<<"Element not found";
//         }        
//  return 0;
//  }

// Method 2 
 int main(){        
         vector<int> vec = {2,22,442,442,22,241,241,876};
        int x = 2;
        sort(vec.begin(), vec.end());
        int index = upper_bound(vec.begin(), vec.end(), x) - vec.begin();
        if (index < vec.size() && vec[index-1] == x )//First we'll check Whether the element is present or not.
        {
            
            cout<<"Last occurence of an Element found at index :"<<index-1;
        }
        else{
            cout<<"Element not found";
        }        
 return 0;
 }

