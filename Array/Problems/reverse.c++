#include <bits/stdc++.h>
using namespace std;
class Reverse{
    int n;
    vector<int>arr;
    public:
    Reverse(vector<int>arr):arr(arr),n(arr.size()){};
    vector<int> reverse_array(){
        for(int i=0;i<n/2;i++){
            int temp=arr[i];
            arr[i]=arr[n-1-i];
            arr[n-1-i]=temp;
        }
        return arr;
    }

};

int main() {
   Reverse r1({1,4,3,2,6,5}),r2({1,4,3,0,2,6,5});
   vector<int>reversed_array=r2.reverse_array();
   for(int x:reversed_array) cout<<x<<" ";
   cout<<endl;
   return 0;
}