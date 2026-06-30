#include <bits/stdc++.h>
using namespace std;
/*
vector<int> rotate(vector<int>& arr,int d){
    //TC:O(n2)
    for(int i=0;i<d;i++){
        int temp=arr[0];
        for(int j=1;j<arr.size();j++){
        arr[j-1]=arr[j];
        }
        arr[arr.size()-1]=temp;
    }
    return arr;
}*/

vector<int> rotate_right(vector<int>& arr,int d){
    //TC:O(n)
    //Reverse entire array
    reverse(arr.begin(),arr.end());
     //Reverse first d elements
    reverse(arr.begin(),arr.begin()+d);
    //Reverse d to n-d elements
    reverse(arr.begin()+d,arr.end());
    return arr;
}

vector<int> rotate_left(vector<int>& arr,int d){
    //TC:O(n)
     //Reverse first d elements
    reverse(arr.begin(),arr.begin()+d);
    //Reverse d to n-d elements
    reverse(arr.begin()+d,arr.end());
    //Reverse entire array
    reverse(arr.begin(),arr.end());
    return arr;
}

int main() {
   vector<int>a1={ 1, 2, 3, 4, 5, 6 };
   vector<int>a2={ 1, 2, 3, 4, 5, 6 };
   rotate_right(a1,2);
   rotate_left(a2,2);
   for(int num:a1) cout<<num<<" ";
   cout<<endl;
   for(int num:a2) cout<<num<<" ";
   return 0;
}