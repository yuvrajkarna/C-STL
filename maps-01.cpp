#include<bits/stdc++.h>
using namespace std;

void printData(map<int,string>&mp){
    cout<<"Size of map = "<<mp.size()<<endl;
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
}
int main(){
    //In map everything is stored in ascending order according to key
    map<int,string>mp;
    mp[1]="raj";
    mp[5]="mukesh";
    mp[2]="fool";
    mp[3];//here by default empty string will be stored in integer it will store 0
    mp.insert(make_pair(4,"bhoot"));
    mp.insert({0,"book"});

    map<int,string>::iterator a;

    for(a=mp.begin();a!=mp.end();a++){
        cout<<(*a).first<<" "<<(*a).second<<endl;
    }
    cout<<endl;

    printData(mp);
    cout<<endl;
    /* 
    NOTE:(In background of map one data structur is maintained i.e Red Black Trees)
    Time complexity:(Here n is the number of elements present in that map )
        1.for inserting it will take O(log(n))
        2.for accessing it will take O(log(n))
        3.for printing elements it will take O(n) time to traverse and O(log(n)) time to access
            total O(nlog(n))
    */
    auto it =mp.find(4);// Time complexity: it will take O(log(n))
    if(it == mp.end()) cout<<"No Value";
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;

    mp.erase(3);// Time complexity: it will take O(log(n))
    printData(mp);
    cout<<endl;

    auto x =mp.find(7);
    /* 
    NOTE:
        -->this is to insure that iterator is pointing within the mapor outside of map
        -->if iterator is pointing outside of map ithen it will thrwow segmentation erroe
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