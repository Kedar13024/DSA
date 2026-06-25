#include <bits/stdc++.h>
using namespace std;

int largest(int *arr,int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
    return largest;
}

int second_largest(int *arr,int n){
    // One Pass 
    int largest=-1;
    int sec_largest=-1;

    for(int i=0;i<n;i++){
        if(arr[i]>largest) {sec_largest=largest; largest=arr[i];}
        else {if(arr[i]<largest and arr[i]>sec_largest) sec_largest=arr[i];}
    }
    return sec_largest;
}

int third_largest(int *arr,int n){
    int largest=-1;
    int sec_large=-1;
    int third_Largest=-1;

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            third_Largest=sec_large;
            sec_large=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest and arr[i]>sec_large){
            third_Largest=sec_large;
            sec_large=arr[i];
        }
        else{
            if(arr[i]<largest and arr[i]<sec_large and arr[i]>third_Largest){
                third_Largest=arr[i];
            }
        }
    }
    return third_Largest;
}
int main() {
   int arr[]={2,4,6,5,8,3,9,1};
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<largest(arr,n)<<endl;
   cout<<second_largest(arr,n)<<endl;
   cout<<third_largest(arr,n)<<endl;
   return 0;
}