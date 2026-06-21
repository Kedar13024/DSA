/*
*********
 *******
  *****
   ***
    *
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    void mysolution(){
        for(int i=5;i>=1;i--){
            for(int j=1;j<=5-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=(2*i-1);k++){
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