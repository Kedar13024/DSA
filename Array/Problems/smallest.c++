#include <bits/stdc++.h>
using namespace std;

class Smallest{
    int n;
    vector<int>vec;
    public:
    Smallest(vector<int> vec){
        this->vec=vec;
        n=vec.size();
    }

    int smallest(){
        int smallest=vec.front();
        for(int i=0;i<n;i++){
            if(vec.at(i)<smallest) smallest=vec.at(i);
        }
        return smallest;
    }

    int second_smallest(){
        int smallest=INT_MAX;
        int sec_smallest=INT_MAX;
        for(int i=0;i<n;i++){
            if(vec[i]<smallest){
                sec_smallest=smallest;
                smallest=vec[i];
            }
            else{
                if(vec[i]>smallest and vec[i]<sec_smallest){
                    sec_smallest=vec[i];
                }
            }
        }
        return sec_smallest;
    }

    int third_smallest(){
        int first=INT_MAX;
        int second=INT_MAX;
        int third=INT_MAX;

        for(int i=0;i<n;i++){
            if(vec[i]<first){
                third=second;second=first;first=vec[i];
            }
            else if(vec[i]>first and vec[i] <second){
                third=second;
                second=vec[i];
            }
            else{
                if(vec[i]>second and vec[i]<third){
                    third=vec[i];
                }
            }
        }
        return third;
    }

};

int main() {
   Smallest s1({2,4,-1,1,0});
   cout<<s1.smallest()<<endl;
   cout<<s1.second_smallest()<<endl;
   cout<<s1.third_smallest()<<endl;
   return 0;
}