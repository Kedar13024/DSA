#include<bits/stdc++.h>
using namespace std;

stack<string> cars;

int main(){
    //1.Add elements
    cars.push("Tesla");
    cars.push("BMW");
    cars.push("Tata");

    //2. Remove  element
    cars.pop();

    //Access top element
    cout<<cars.top()<<endl;

    // Get size
    cout<<cars.size()<<endl;
    //Check if stack is empty
    cout<<cars.empty()<<endl;
    return 0;
}