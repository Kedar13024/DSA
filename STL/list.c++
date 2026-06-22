#include<bits/stdc++.h>
using namespace std;

list<string> cars= {"Volvo", "BMW", "Ford", "Mazda"};

int main(){
    //1. Add element
    cars.push_back("Tesla");

    //2. Remove element
    cars.pop_front();//First
    cars.pop_back();// last

    //3. Get size of list
    cout<<cars.size()<<endl;

    //4. Check if list is empty
    cout<<cars.empty()<<endl;

    //5. Traverse list
    for(string car: cars){
        cout<<car<<" ";
    }
    cout<<endl;
    return 0;
}