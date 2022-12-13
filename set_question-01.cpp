/*
Given N strings, print unique strings in lexographical order with their frequency.
N<=10^5
|s|<=100

input:
9
xyz
zba
abc
zba
xyz
czd
abc
cab
czd

output:
abc
cab
czd
xyz
zba
*/
#include<bits/stdc++.h>
using namespace std;

void printSet(set<string>&s){
    //cout<<"size of set = "<<s.size()<<endl;
    for(string value: s){
        cout<<value<<endl;
    }
    cout<<endl;
}

int main(){
    set<string>s;
    int n;
    cin>>n;
    while(n--){
        string x;
        cin>>x;
        s.insert(x);
    }
    printSet(s);
    return 0;
}