/*
1 * * * * * * * * 1 
1 2 * * * * * * 2 1 
1 2 3 * * * * 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 4 5 5 4 3 2 1 
*/
#include<iostream>
using namespace std;
class Solution{
    public:
    void mysolution(){
        int n=5;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            for(int space=1;space<=2*(n-i);space++){
                cout<<"* ";
            }
            for(int j=i;j>=1;j--){
                cout<<j<<" ";
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