#include <bits/stdc++.h>
using namespace std;

int main() {
   int arr[]={0,1,2,3,4};
   int n=sizeof(arr)/sizeof(arr[0]);
   vector<char>letters={'K','E','D','A','R'};

   
   //1. Insert at begining
   //Vector
   letters.insert(letters.begin(),'A');
   for(char letter:letters){
        cout<<letter<<" "<<endl;
   }

   //array
   //shift elements to right
   
   for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
   }
   arr[0]=9;
   n++;
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
   }
   cout<<endl;
   
    
   //2.Insert at specific position 
   int pos=3;
   int ele=9;

   //VECTOR
   letters.insert(letters.begin()+pos-1,'X');
   for(char letter:letters){
    cout<<letter<<" ";
   }
   cout<<endl;

   //Array
   for(int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
   }
   arr[pos-1]=ele;
   n++;

   for(int i = 0; i < n; i++) cout << arr[i] << " ";
   cout<<endl;
   

   //3.At end;
   //Vector
   letters.push_back('Z');
   for(char letter:letters) cout <<letter<<" ";
   cout<<endl;

   //Array
   arr[n]=9;
   n++;
   for(int i=0;i<n;i++) cout<<arr[i]<<" ";
   cout<<endl;
   return 0;
}