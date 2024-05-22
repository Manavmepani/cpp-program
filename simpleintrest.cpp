#include<iostream>
using namespace std;
int main(){
    int p,r,t,intrest;
    cout <<"enter principal:";
    cin >> p;
    cout <<"enter rate:";
    cin >> r;
    cout <<"enter time:";
    cin >> t;
    intrest=p*r*t/100;
    cout <<"your intrest is"<<intrest;
    return 0;

}