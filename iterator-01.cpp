#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {1,3,4,5,6};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    /*
    NOTE:
    v.begin() points to first element 
    v.end() points to next of last element
    */
    vector<int>::iterator it=v.begin();
    cout<<*(it+1)<<endl;
    for(it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    /* 
    NOTE:
    Difference between it++ and it=it+1

    it+=1 
    --> this means move to next location
    --> this is only used where datsa is stored in contiguous memory
    --> it is used in array,vector etc
    it++ 
    --> this means move to next iterator
    --> this can be store in any arrangement of data
    --> it is used in maps,set etc
    */

    vector<pair<int,int>>vp = {{2,3},{5,6},make_pair(4,5)};
    vector<pair<int,int>> :: iterator it1;
    for(it1=vp.begin();it1!=vp.end();it1++){
        cout<<(*it1).first<<" "<<it1->second<<endl;
        //(*it1).first = it->first
        //(*it1).second = it->second
    }
    cout<<endl;
    return 0;
}