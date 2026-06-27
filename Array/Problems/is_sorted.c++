#include <bits/stdc++.h>
using namespace std;

bool is_sorted(const vector<int>& arr){
   for(int i=1;i<arr.size();i++){
      if(arr.at(i-1)>arr.at(i)){
         return false;
      }
   }
   return true;
}

int main() {
   vector<int> arr1={1,7,3,4,9,3};
   vector<int> arr2={1,2,3,4,5,6};
   cout<<is_sorted(arr1)<<endl;
   cout<<is_sorted(arr2)<<endl;
   return 0;
}