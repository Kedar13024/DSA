#include <bits/stdc++.h>
using namespace std;

//Using Backward Traversal TC=O(n) SC=O(1)
string reverse_BT(string vec){
    string temp="";
    for(int i=vec.size()-1;i>=0;i--){
        temp+=vec[i];
    }
    return temp;
}


//Using Two pointers
string reverse_TP(string &vec){
    int n=vec.size();
    for(int i=0;i<n/2;i++){
        swap(vec[i],vec[n-i-1]);
    }
    return vec;
}


int main() {
   string vec="Kedar";
   cout<<reverse_TP(vec)<<endl;
   return 0;
}