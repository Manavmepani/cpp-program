#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<"enter a number:";
    cin >> num;
    if(num>0){
        cout<<"a is positive number:";
    }else if(num<0){
        cout<<"a is negetive number:";
    }else{
        cout<<"the number is zero <<zero";
    }
    return 0;
    }