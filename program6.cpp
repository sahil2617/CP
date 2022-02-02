#include<bits/stdc++.h>
using namespace std;
            void insert(vector<int> &num){
                num.clear();
                for(int i = 0; i< 5 ; i++){
                    int x;
                    cin>>x;
                    num.emplace_back(x);
                }
            }
            int fetchSum(vector<int> num){
                int sum = 0;
                sum = accumulate(num.begin(),num.end(), 0);
                return sum;
            }
            void display(vector<int> &result){
                for (auto it: result)
                {
                    cout<<it<<endl;
                }
                
            }
            
int main(){
        
        int t;
        cin>>t;
            vector<int> num;
            vector<int> result;
        while(t--){
            insert(num);
            result.emplace_back(fetchSum(num));
        }
        display(result);
return 0;
}