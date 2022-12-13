#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {1,3,4,5,6};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    vector<int>::iterator it=v.begin();
    cout<<*(it+1)<<endl;
    for(it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    
    //here one it variable is created and everytime value is stored
    for(auto it:v){
        cout<<(it)<<" ";
    }
    cout<<endl;
    //here directly we are accessing value of vector by passing reference
    for(auto &it:v){
        it++;
        cout<<(it)<<" ";
    }
    cout<<endl;

    vector<pair<int,int>>vp = {{2,3},{5,6},make_pair(4,5)};
    vector<pair<int,int>> :: iterator it1;
    for(it1=vp.begin();it1!=vp.end();it1++){
        cout<<(*it1).first<<" "<<it1->second<<endl;
        //(*it1).first = it->first
        //(*it1).second = it->second
    }
    cout<<endl;

    for(pair<int,int> &it:vp){    
        cout<<it.first<<" "<<it.second<<" ";
    }
    cout<<endl;

    for(auto &it:vp){
        cout<<it.first<<" "<<it.second<<" ";
    }
    cout<<endl;
    return 0;
}