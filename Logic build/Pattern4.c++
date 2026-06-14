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
        for(int i=1;i<=5;i++){
            for(int j=1;j<=i;j++){
                cout<<i;
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