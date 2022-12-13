
/* 
Test cases
5

4
1 2 3 4
2 
2 3
4
5 5 6 6
3
2 3 5
2
*/
#include<bits/stdc++.h>
using namespace std;
void printVectorPair(vector<pair<int,int>>&v){
    cout<<"size of vector = "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
void printVector(vector<int>&v){
    cout<<"size of vector = "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    /*
    //this is an example of vector of pairs
    vector<pair<int,int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printVectorPair(v);
    */
   
    /*
    //this is an example of vector of array
    int N;
    cin>>N;
    vector<int>v[N];

    for(int i=0;i<N;i++){

        int n;//this is the size of array
        cin>>n;
        
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        
    }
    cout<<v[0][1];//answer will be the second element of first array of vector v
    for(int i=0;i<N;i++){
        printVector(v[i]);
    }
    */
    
    int N;
    cin>>N;
    vector<vector<int>>v;

    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        //first method is to take one temperary vector for storing 
        vector<int>temp;
        //second method is to push an empty vector and add element 
        //v.push_back(vector<int>{});
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            //first method
            temp.push_back(x);
            //second method
            //v[i].push_back(x);
        }
        //Now temperary vector is stored in vector of arrays
        //first method 
        v.push_back(temp);
        //in second method no already stored
        //here first method is more readable
    }
    v[0].push_back(99);
    for(int i=0;i<v.size();i++){
        printVector(v[i]);
    }
    return 0;
}