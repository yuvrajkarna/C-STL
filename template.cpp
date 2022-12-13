#include<iostream>
using namespace std;
/*
int sum(int a,int b){
    return a+b;
}
float sum(float a,floatb){
    return a+b;
}
*/
template<typename T>
T sum(T a,T b){
    return a+b;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);
    float c,d;
    cin>>c>>d;
    cout<<sum(c,d);
    return 0;
}