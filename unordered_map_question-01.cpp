/*
Given N strings, print frequency of strings given in queries.
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

#include<bits/stdc++.h>
using namespace std;
int main(){
    //We are using unordered map because it takes less time to operate compare to map
    //this question can also be solved using map
    unordered_map<string,int>mp;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        mp[s]=mp[s]+1;
        //mp[s]++;
    }
    int q;
    cin>>q;
    while(q--){
        string x;
        cin>>x;
        cout<<mp[x]<<endl;
    }
    
    return 0;
}