/*
12345
1234
123
12
1
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    void mysolution(){
        for(int i=5;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<j;
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