/*
    *
   ***
  *****
 *******
*********
*/
/*
HINT : 
Rows → outer loop (controls height).
Spaces → n - i (decrease each row).
Stars → 2 * i - 1 (odd numbers of * grow each row).
Combine spaces + stars → centered pyramid.
 Think of it as: shift left with spaces, expand width with stars.
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    void mysolution(){
        for(int i=1;i<=3;i++){
            for(int j=1;j<=3-i;j++){
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