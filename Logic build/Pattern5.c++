/*
1
22
333
4444
55555
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    void mysolution(){
        for(int i=0;i<5;i++){
            for(int j=5;j>i;j--){
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