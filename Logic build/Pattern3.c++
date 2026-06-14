/*
1
12
123
1234
12345
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    void mysolution(){
        for(int i=1;i<=5;i++){
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