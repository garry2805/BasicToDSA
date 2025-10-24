#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the char:";
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
        cout<<"Character is in UPPERCASE";
    }
    else{
        cout<<"Character is in lowercase";
    }
    return 0;
}