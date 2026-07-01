#include <bits/stdc++.h>
using namespace std;

vector<string> all_substring (string &s){
    vector<string> result;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            result.push_back(s.substr(i,j-i+1));
        }
    }
    return result;
}

int main() {
   string s="abc";
   vector<string> result;
   result=all_substring(s);
   for(string sub:result){
     cout<<sub<<" ";
   }
   return 0;
}