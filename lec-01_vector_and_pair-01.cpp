#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string>p;
    // p=make_pair(2,"hello World");
    p={3,"pair1"};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,string> &p1=p;
    p1.first=9;
    cout<<p.first<<" "<<p.second<<endl;

    int a[]={1,2,3,4};
    int b[]={2,3,4,5};
    pair<int,int>pr[4];//array of pair
    for(int i=0;i<4;i++){
        pr[i]={a[i],b[i]};
    }
    for(int i=0;i<4;i++){
        cout<<pr[i].first<<" "<<pr[i].second<<endl;
    }
    cout<<endl;

    swap(pr[1],pr[3]);
    for(int i=0;i<4;i++){
        cout<<pr[i].first<<" "<<pr[i].second<<endl;
    }
    
    return 0;
}