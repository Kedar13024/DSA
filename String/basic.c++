#include <bits/stdc++.h>
using namespace std;

int main() {
   string s="Hello World";
   string s2="HelloWorld";
   cout<<"Length of string "<<s.size()<<endl;
   cout<<(s==s2)<<endl;
   cout<<(s.find('l'))<<endl;
  for(int c=0;c<s.length();c++){
    if(s[c]=='l'){cout<<c<<endl;break;}
  }
  s[5]='!';
  cout<<s<<endl;
  s.insert(5," ");
    cout<<s<<endl;
  s.erase(5,1);
    cout<<s<<endl;
  char c='l';
  string temp="";
  for(int i=0;i<s.size();i++){
    if(s[i]!=c) temp.push_back(s[i]);
  }
  cout<<temp<<endl;
   return 0;
}