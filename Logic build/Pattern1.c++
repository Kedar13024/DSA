/*
*****
*****
*****
*****
*****
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    void mysolution(){
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
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