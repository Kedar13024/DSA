#include<bits/stdc++.h>
using namespace std;

queue<string> cars;

int main(){
    //1. Add element
    cars.push("Tesla");
    cars.push("Tata");
    cars.push("BMW");

    //2. Remove element
    cars.pop();// last

    //3. Get size of queue
    cout<<cars.size()<<endl;

    //4. Check if queue is empty
    cout<<cars.empty()<<endl;

    //5. Access element
    cout<<cars.front()<<endl;
    cout<<cars.back()<<endl;
    return 0;
}