#include <bits/stdc++.h>
using namespace std;

int main() {
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int arr2d[3][3]={{1,2,3},{4,5,6},{7,8,9}};

   //Access and change array element
   arr[5]=0;
   cout<<arr[5]<<endl;

   //Length of array
   int n1=sizeof(arr)/sizeof(arr[0]);
   cout<<sizeof(arr)<<"/"<<sizeof(arr[0])<<"="<<n1<<endl;

   int n2=sizeof(arr2d)/sizeof(arr2d[0]);
   
   //Traverse an array
   //1. Linear-1D
   for(int i=0;i<n1;i++){
     cout<<arr[i]<<endl;
   }

   //2.Linear -2D
   for(int i=0;i<n2;i++){
    for (int j = 0; j < n2; j++)
    {
        cout<<arr2d[i][j]<<endl;
    }
   }

   // Reverse traversal
   for(int i=n1-1;i>=0;i--){
     cout<<arr[i]<<endl;
   }
   return 0;
}