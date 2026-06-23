#include <bits/stdc++.h>
using namespace std;

int main() {
   //Creation and initialization of fixed-sized (compile time allocation) array
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   //Creation and initialization of fixed-sized (Run time allocation) array
   int *darr = new int[10];
    //Dynamic sized array(vector)
    vector<int> varr={1,2,3,4,5,6,7,8,9,10};
    //2D array
    int arr2d[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //Access array element
    cout<<arr[1]<<endl;
    cout<<arr2d[1][2]<<endl;
   return 0;
}