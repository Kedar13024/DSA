/*
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    void mysolution(){
        int n=5;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                if ((i + j) % 2 == 0)
                    cout << "1 ";
                else
                    cout << "0 ";
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