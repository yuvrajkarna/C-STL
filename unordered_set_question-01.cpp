/*
Given N strings, print strings given in queries are present or not.
N<=10^5
|s|<=100
q<=10^6;
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
2
czd
cab

output:
2
1

*/
void printSet(unordered_set<string>&s){
    cout<<"size of set = "<<s.size()<<endl;
    for(string value: s){
        cout<<value<<endl;
    }
    cout<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    //We are using unordered set because it takes less time to operate compare to set
    //this question can also be solved using set
    unordered_set<string>s;
    int n;
    cin>>n;
    while(n--){
        string x;
        cin>>x;
        s.insert(x);
    }
    int q;
    cin>>q;
    while(q--){
        string test;
        cin>>test;
        if(s.find(test) != s.end()){
            cout<<"present\n";
        }
        else{
            "not present\n";
        }
    }
    printSet(s);
    
    return 0;
}