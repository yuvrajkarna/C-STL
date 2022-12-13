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
abc 2
cab 1
czd 2
xyz 2
zba 2
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    //In map everything is stored in ascending order according to key
    map<string,int>mp;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        mp[s]=mp[s]+1;
        //mp[s]++;
    }
    for(auto &it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}