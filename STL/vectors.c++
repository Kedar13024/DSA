#include<bits/stdc++.h>
using namespace std;

vector<string> cars={"Mercedes","BMW","Volvo","Tata"};

int main(){
    //1. Traversing
    for(string car : cars){
        cout<<car<<endl;
    }
    //Looping
    for (int i = 0; i < cars.size(); i++) {
        cout << cars[i] << "\n";
    }
    
    //2. Access a vector
    cout<<"My Favourite: "<<cars[1]<<endl;

    //Access 1st and last element
    cout<<"First Car in list: "<<cars.front()<<endl;
    cout<<"Last Car in list: "<<cars.back()<<endl;

    //Acess at specific index (Prferred)
    cout<<"Third Car in list: "<<cars.at(2)<<endl;

    // Change element
    cars.at(2)="Mahindra";
    cout<<"Third Car in list(After change) : "<<cars.at(2)<<endl;

    // Add vector element 
    cars.push_back("Tesla");
    cout<<"Last Car in list (After adding) : "<<cars.back()<<endl;

    //Remove Vector Elements
    cars.pop_back();
    cout<<"Last Car in list (After removal) : "<<cars.back()<<endl;

    //Vector Size
    cout <<cars.size()<<endl;

    //Check if a Vector is Empty
    cout<<cars.empty()<<endl;
    return 0;
}