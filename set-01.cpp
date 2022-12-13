#include<bits/stdc++.h>
using namespace std;

void printSet(set<string>&s){
    cout<<"size of set = "<<s.size()<<endl;
    for(string value: s){
        cout<<value<<endl;
    }
    cout<<endl;
}
int main(){
    //Everything is same as map except concept of keys and value
    set<string>s;
    s.insert("happy");
    s.insert("mode");
    s.insert("love");
    s.insert("mode");
    printSet(s);

    /* 
    NOTE:(In background of map one data structur is maintained i.e Red Black Trees)
    Time complexity:(Here n is the number of elements present in that map )
        1.for inserting it will take O(log(n))
        2.for accessing it will take O(log(n))
        3.for printing elements it will take O(n) time to traverse and O(log(n)) time to access
            total O(nlog(n))
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