#include<bits/stdc++.h>
using namespace std;

void printData(unordered_map<int,string>&mp){
    cout<<"Size of map = "<<mp.size()<<endl;
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
}
int main(){
    //In unordered map everything is stored in order as key is inserted
    unordered_map<int,string>mp;
    //in unordered map we can only keep valid data types i.e unordered_map<pair<int,int>,string>mp is not vaild
    mp[1]="raj";
    mp[5]="mukesh";
    mp[2]="fool";
    mp[3];//here by default empty string will be stored in integer it will store 0
    mp.insert(make_pair(4,"bhoot"));
    mp.insert({0,"book"});

    unordered_map<int,string>::iterator a;

    for(a=mp.begin();a!=mp.end();a++){
        cout<<(*a).first<<" "<<(*a).second<<endl;
    }
    cout<<endl;

    printData(mp);
    cout<<endl;
    /* 
    NOTE:(In background of unordered map one data structur is maintained i.e Hash Table)
    Time complexity:(Here n is the number of elements present in that map )
        1.for inserting it will take O(1)
        2.for accessing it will take O(1)
        3.for printing elements it will take O(n) time to traverse and O(1) time to access
            total O(n)
    */
    auto it =mp.find(4);// Time complexity: it will take O(1)
    if(it == mp.end()) cout<<"No Value";
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;

    mp.erase(3);// Time complexity: it will take O(1)
    printData(mp);
    cout<<endl;

    auto x =mp.find(7);
    /* 
    NOTE:
        -->this is to insure that iterator is pointing within the map or outside of map
        -->if iterator is pointing outside of map ithen it will throw segmentation error
    */
    if(x!=mp.end())
    mp.erase(x);
    printData(mp);
    cout<<endl;

    mp.clear();
    cout<<"check";
    printData(mp);
    cout<<endl;
    
    return 0;
}
