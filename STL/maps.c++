#include<bits/stdc++.h>
using namespace std;

map<int,string> cars={{1,"BMW"},{2,"Tata"},{3,"Tesla"}};

int main(){
    //1. Add element
    cars.insert({4,"Tesla"});

    //2. Remove single element
    cars.erase(1);

    //3. Remove all element
    cars.clear();

    //4. Get size 
    cout<<cars.size()<<endl;

    //5. Check if is empty
    cout<<cars.empty()<<endl;

    //6. Check if specifiuc element exist
    cout<<cars.count(2)<<endl;
    
    cars.insert({1,"Tesla"});
    //7. Access element (.at or indexing)
    cout<<cars.at(1)<<" or "<<cars[1]<<endl;

    //8. Traverse
    // first=key second=value
    for (auto car: cars) {
        cout << car.first << " is: " << car.second << "\n";
    }
    return 0;
}