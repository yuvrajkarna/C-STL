#include<bits/stdc++.h>
using namespace std;

void printSet(unordered_set<string>&s){
    cout<<"size of set = "<<s.size()<<endl;
    for(string value: s){
        cout<<value<<endl;
    }
    cout<<endl;
}
int main(){
    //Everything is same as set except it dont follow any order and is same as  unordered map ecxcept concept of keys and value
    unordered_set<string>s;
    s.insert("happy");
    s.insert("mode");
    s.insert("love");
    s.insert("mode");
    printSet(s);

    /* 
    NOTE:(In background of unordered map one data structur is maintained i.e Hash Table)
    Time complexity:(Here n is the number of elements present in that map )
        1.for inserting it will take O(1)
        2.for accessing it will take O(1)
        3.for printing elements it will take O(n) time to traverse and O(1) time to access
            total O(n)
    */

    auto it=s.find("love");
    if(it!=s.end()){
        s.erase(it);
    }
    printSet(s);

    s.erase("mode");
    printSet(s);

    return 0;
}
