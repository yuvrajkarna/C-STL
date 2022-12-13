#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int>&v){
    cout<<"Size of vector="<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;;
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        v.push_back(value);
    }
    printVector(v);

    v.push_back(8);
    v.push_back(9);
    printVector(v);

    v.pop_back();
    printVector(v);

    vector<int>&v0=v;
    v0.push_back(12);
    printVector(v);
    
    vector<int>v1(10);
    printVector(v1);

    v1.push_back(23);
    printVector(v1);

    vector<int>v2(10,2);
    v2.push_back(39);
    printVector(v2);

    return 0;
}