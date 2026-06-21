/*
      *
    * *
  * * *
* * * *
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    void mysolution(){
        int n=5;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int j=n;j>n-i;j--){
                cout<<"*";
            }
            cout<<endl;
        }
        return;
    }
};

int main(){
    Solution sol;
    sol.mysolution();
    return 0;
}